/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249303
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_15))))))));
                arr_4 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)4))));
                var_21 = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_22 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)161)) || (var_12))))) <= (((((/* implicit */_Bool) (unsigned char)101)) ? (2259686048U) : (4177920U)))));
        arr_7 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(unsigned short)22])) || (((/* implicit */_Bool) ((signed char) var_6)))));
        var_23 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)161)))) <= (((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) (signed char)-112))))));
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_6 [i_2]) <= (-1073741824LL))));
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3])))))));
        var_24 = ((/* implicit */short) (unsigned short)14297);
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_25 = arr_13 [i_3] [(signed char)10];
            var_26 = ((/* implicit */short) arr_5 [i_3]);
            arr_14 [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6))))) <= (((/* implicit */int) (unsigned char)92)));
        }
    }
    var_27 = ((/* implicit */_Bool) var_18);
}
