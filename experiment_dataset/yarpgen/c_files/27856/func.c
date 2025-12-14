/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27856
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)1039))))))) < (min(((-(var_1))), (((/* implicit */long long int) var_13))))));
    var_19 = ((/* implicit */unsigned char) (~((+((-(((/* implicit */int) var_15))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) var_13);
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_2 [i_0 - 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0 + 3] [i_2] [i_2] [i_2] [i_3] = var_16;
                        arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((arr_9 [i_0] [i_1] [i_2] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) && ((!(((/* implicit */_Bool) arr_1 [i_1]))))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [(signed char)12] &= ((/* implicit */unsigned short) arr_7 [i_0] [i_1]);
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64470))))) <= (var_12)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] &= min((((((/* implicit */int) var_0)) == (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_7 [i_4] [14U]))))))), ((!(((/* implicit */_Bool) min((arr_14 [i_4] [i_4 + 1]), (((/* implicit */unsigned long long int) var_13))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2575350291533425468LL)) ? (14792356663582156579ULL) : (((/* implicit */unsigned long long int) 428363916))));
    }
    for (signed char i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        arr_20 [i_5 - 1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_5]))))), (max((((/* implicit */unsigned long long int) var_1)), (arr_14 [i_5] [i_5]))))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1)))))))));
        var_24 = ((/* implicit */unsigned char) arr_16 [i_5]);
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_5] [i_5 + 1] [i_5] [(unsigned char)20]))))) ? (((/* implicit */unsigned long long int) (~(var_13)))) : ((~(var_5)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
        arr_24 [(unsigned char)10] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (arr_22 [i_6] [(unsigned char)8]) : (((/* implicit */int) arr_23 [i_6])))) | ((+(((/* implicit */int) arr_21 [i_6]))))));
        var_27 = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_21 [i_6]))))));
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8388608)) ? (428363920) : (((/* implicit */int) (unsigned short)1049))))) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))));
    }
}
