/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205855
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_12))));
        var_18 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) -1893520975885264165LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))) : (2161178327066207851LL))))), (((/* implicit */long long int) (unsigned short)60544))));
        var_19 -= ((/* implicit */signed char) arr_0 [0U]);
    }
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            {
                arr_9 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) min(((unsigned char)194), (((/* implicit */unsigned char) (signed char)127))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)60544)), (((((/* implicit */_Bool) min((-1073020107518282741LL), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_3])) ? (2147483647) : (((/* implicit */int) (_Bool)1))))))));
                    arr_12 [i_1 + 4] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_3)))) ? (arr_7 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_2] [i_1])))))) & (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_3] [i_2])))))));
                }
                arr_13 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)17)));
            }
        } 
    } 
}
