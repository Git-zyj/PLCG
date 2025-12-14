/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237419
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */_Bool) var_6);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) 620251599);
                            var_19 = ((/* implicit */unsigned char) (((-(((long long int) -7193710989876239633LL)))) + (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (arr_8 [i_0] [i_2] [(_Bool)1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = var_0;
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (signed char)-1))))) / (2017612633061982208LL)))) ? (max((max((14778222395981864661ULL), (((/* implicit */unsigned long long int) 7193710989876239633LL)))), (arr_5 [i_4] [i_5]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)0)), (var_9)))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (int i_8 = 1; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_22 = var_7;
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_13)), (16119261021803708382ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)204), (((/* implicit */unsigned char) var_6))))) >= (((/* implicit */int) arr_9 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 2] [i_8 - 1]))))) : (((/* implicit */int) var_7)))))));
                                arr_25 [i_4] [i_4] [i_4] [(unsigned char)15] [12ULL] [i_4] [12ULL] = ((max((((/* implicit */unsigned long long int) arr_15 [i_8 - 1])), (arr_5 [i_8 - 1] [i_8]))) < (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_5 [i_8 - 1] [i_8]))));
                                var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_23 [7U] [7U] [i_6] [14ULL] [i_8 + 1] [i_5]))))))) && (((/* implicit */_Bool) (-(((6989725963683285907LL) / (-7193710989876239634LL))))))));
                                arr_26 [i_4] [i_5] [i_6] [i_7] [i_5] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4137770383212764124LL)) ? ((-(var_1))) : (((/* implicit */unsigned long long int) 5973825754048893503LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
