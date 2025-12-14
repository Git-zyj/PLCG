/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248463
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
    var_18 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1175887812)))))) ^ (((((/* implicit */_Bool) 12042208547536441948ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6281))) : (12042208547536441948ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */short) (signed char)108)), (var_10))), (((/* implicit */short) ((_Bool) (_Bool)1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0])) | (((/* implicit */int) (unsigned short)12538))))) && (((/* implicit */_Bool) (~(arr_1 [i_1 + 1])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (3952615687399473749ULL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [9ULL] [9ULL] [i_4] [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 2] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_2 [i_0 - 2] [i_1]), (((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 1] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_8 [i_0] [i_4 - 1]))))))) || (((/* implicit */_Bool) 2955742316U))));
                                var_20 = ((((/* implicit */_Bool) 2127902178)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (_Bool)1)));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_2]))))), ((-(var_4)))))) ? (((((/* implicit */int) arr_2 [i_0 - 2] [i_1 + 2])) + (((/* implicit */int) arr_2 [i_0 - 3] [i_1 + 1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 5001100425866014913LL)) != (5948853934663363534ULL))))));
                                var_22 = ((/* implicit */unsigned int) (((-(arr_12 [i_0 - 4] [i_1 + 1]))) < (((/* implicit */int) ((arr_12 [i_2] [i_3]) != (arr_12 [i_1 - 1] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
