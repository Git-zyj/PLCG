/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53510
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
    var_12 = min((((((/* implicit */long long int) (~(var_3)))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31549))) : (var_11))))), (((/* implicit */long long int) max((((/* implicit */int) var_8)), (1188026459)))));
    var_13 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) (signed char)101)))) : (((((/* implicit */_Bool) var_6)) ? (var_3) : (var_5))))) + (2147483647))) << (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) ((short) (short)9167))) - (9150)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_8);
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-64))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (short)-14797);
        var_14 = ((_Bool) max((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)42510)), (((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (unsigned short)25396)) : (((/* implicit */int) (short)14805)))))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            {
                arr_10 [i_2] [i_1 - 2] [i_2] = ((/* implicit */int) arr_6 [i_2]);
                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (short)-31537)) < (((/* implicit */int) arr_8 [i_2]))))), ((unsigned short)9988))))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_4] [(unsigned char)10] [i_2] [8U] [(signed char)10]))));
                            var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_11 [i_1] [i_2] [i_2] [i_4]), (((/* implicit */short) ((_Bool) 4141753215U)))))) ? (min((((((/* implicit */int) arr_12 [1LL] [i_3] [i_2] [i_1])) | (((/* implicit */int) (unsigned char)234)))), (((/* implicit */int) arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_4])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_7 [i_1 + 2]))))));
                            var_18 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) arr_11 [i_1 - 3] [i_1 - 2] [i_1 + 2] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22451)) ? (var_3) : (((/* implicit */int) (unsigned char)32))))) ? (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned int) var_4)) : (4136585155U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)21720)), (((((/* implicit */_Bool) -431150352)) ? (((/* implicit */int) (short)-31550)) : (((/* implicit */int) (short)22792)))))))));
}
