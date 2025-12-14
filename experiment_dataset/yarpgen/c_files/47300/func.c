/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47300
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
    var_17 = ((/* implicit */unsigned int) var_16);
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) var_15)) ? (935137152U) : (3359830144U))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */signed char) (_Bool)0)))))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) min((((int) var_13)), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) var_5))))))))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_9);
                }
                for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_19 -= ((/* implicit */unsigned int) (_Bool)1);
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)19827)), (2547600325U)));
                    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (935137152U))))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 = ((/* implicit */short) ((max((((/* implicit */unsigned int) var_12)), (4294967287U))) % ((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3351383781U)))))));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned int) -1153490775)) : (3814349952U)));
                    arr_15 [9U] [i_1] [10] [(_Bool)1] &= ((/* implicit */long long int) ((int) (-(((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))));
                    arr_16 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                }
                var_24 *= ((((((/* implicit */long long int) ((/* implicit */int) ((2147483640U) > (1318961035U))))) > ((-(9223372036854775807LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (max((((/* implicit */unsigned int) -1153490775)), (2147483640U))));
            }
        } 
    } 
}
