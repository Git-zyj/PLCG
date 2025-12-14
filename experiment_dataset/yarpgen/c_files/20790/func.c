/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20790
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
    var_16 = ((/* implicit */signed char) (((~(min((18410715276690587648ULL), (((/* implicit */unsigned long long int) var_2)))))) & (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (var_10)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] &= var_12;
                            var_18 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_2 + 1] [i_0 - 2] [i_1 - 1] [i_0] [i_2 - 2]))))), (min((var_10), (((/* implicit */unsigned long long int) var_4)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(arr_12 [i_0])))) & (arr_1 [i_6 + 2]))) | (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)32753)))))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_4))));
                                arr_21 [i_6 + 1] [i_6 + 1] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) (unsigned short)45156);
                                arr_22 [i_0] [i_1] [i_4] [i_5] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_1] [i_5] [(short)3])) | (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))), ((!((!(((/* implicit */_Bool) var_0))))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-((-(((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned long long int) var_2)) : (2048ULL))))))))));
}
