/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203173
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) (~(var_3)))))));
    var_20 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                var_21 |= arr_5 [(_Bool)1] [i_1] [(_Bool)1];
                var_22 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-16))) ? (((((/* implicit */int) (unsigned short)51887)) & (((/* implicit */int) (signed char)-25)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)53)) && (((/* implicit */_Bool) -1073741824))))))));
            }
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) / (((/* implicit */int) (signed char)-16))))) : ((~(arr_5 [i_0] [i_0] [i_0])))))));
        }
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 255522049U)) / (-203381485207601223LL)));
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) min((-6LL), (-11LL)));
    }
    for (short i_3 = 1; i_3 < 8; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) ((int) 255522049U));
        var_24 += ((/* implicit */_Bool) ((unsigned short) max((arr_0 [i_3 + 1]), (arr_0 [i_3 + 3]))));
    }
}
