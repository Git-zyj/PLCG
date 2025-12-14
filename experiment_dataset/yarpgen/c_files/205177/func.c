/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205177
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = arr_2 [(short)3];
                    arr_8 [i_0] [(short)11] [i_0] = ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) (short)-29690)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned short)30848)) ? (((/* implicit */int) (short)-6263)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */int) arr_1 [i_0 + 1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    arr_18 [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_13 [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)19] [i_5]))) : (arr_16 [i_3] [i_3] [i_3] [i_3])))));
                    arr_19 [i_3] [i_3] [(unsigned char)17] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (((unsigned int) (+(arr_17 [(short)14] [(short)14] [i_4] [(short)14])))) : ((((-(4194300U))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_17 [i_3] [i_4] [i_5] [i_5]) : (arr_17 [i_5] [i_4] [(_Bool)1] [i_3])))) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_3] [i_3])) ? (arr_17 [i_3] [i_4] [(unsigned char)4] [17LL]) : (((/* implicit */unsigned long long int) arr_12 [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16372))) : (arr_12 [i_3]))))))));
                    var_16 += ((/* implicit */short) (-((+(((arr_11 [i_3]) & (((/* implicit */unsigned long long int) arr_14 [4ULL]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        for (long long int i_7 = 4; i_7 < 18; i_7 += 2) 
                        {
                            {
                                arr_25 [i_3] [i_4] [i_5] [i_4] [i_7] [i_3] = ((/* implicit */int) ((32512U) << (((((/* implicit */int) (unsigned short)30840)) - (30825)))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_5] [i_6 + 1])) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) (unsigned char)172))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [5LL])) ? (arr_21 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30849)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])) ? (130023424U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(_Bool)1] [i_4] [11] [(_Bool)1] [i_7 - 3])))))) : (arr_21 [i_6 - 1]))) : (max(((-(15360ULL))), (((/* implicit */unsigned long long int) var_7))))));
                                var_18 *= ((/* implicit */short) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))), ((-(32485U))))), (arr_16 [i_7] [i_7 - 4] [(unsigned char)12] [i_7])));
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-6260))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
