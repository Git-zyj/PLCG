/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201397
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_1] [i_2 - 1] [i_2] [i_3] = (((-((-(18446744073709551604ULL))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((_Bool)1))))))));
                            arr_12 [i_0 + 1] [i_0 + 1] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) min((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2]), (arr_7 [i_2] [i_2] [i_0] [i_0])))), (arr_6 [i_0 + 1] [i_1] [i_2 - 2]))))));
                            var_15 = ((/* implicit */short) (-(max((var_4), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_11))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) max((var_16), ((~(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))), (((-1359379280953029631LL) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-32752))));
                    arr_20 [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5]))))))), ((+(((((/* implicit */int) (unsigned char)211)) | (((/* implicit */int) arr_0 [i_6 + 3]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            {
                                arr_26 [i_4] [i_4] [i_6 + 1] [i_5] [i_8] = (-(min((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) (unsigned char)211))))), (arr_25 [i_8] [i_6 + 3] [i_5] [i_5] [i_4]))));
                                var_18 = ((/* implicit */int) ((max((((16383LL) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)109))))))) | (((/* implicit */long long int) (~(min((var_13), (((/* implicit */unsigned int) (unsigned char)255)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((var_13) > (((/* implicit */unsigned int) var_4)))), ((!(((/* implicit */_Bool) 0)))))))) != (((var_5) + (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)32)))))))));
                    arr_27 [i_5] = (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_6 [i_4] [i_5] [i_6])))))))));
                }
            } 
        } 
    } 
}
