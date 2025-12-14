/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227226
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
    var_16 = ((/* implicit */unsigned short) ((((-6872483735592638302LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)42282)) : (((/* implicit */int) var_10))))))) ? (var_1) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)3836)) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned short)42274))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0 + 2] [i_1] [i_1] = ((/* implicit */unsigned int) -1554931154);
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((long long int) arr_1 [i_1 + 1]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(unsigned short)16] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -1027670358))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((arr_1 [i_1 + 1]) - (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))) && (((((/* implicit */int) arr_2 [i_0 + 2])) < (((/* implicit */int) arr_2 [i_0 + 1]))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) -660373123)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_0 + 1]))))), ((-(9223372036854775807LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0 - 1] [15] [i_0] = ((/* implicit */short) (unsigned short)42288);
                                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_5])) ? (((((/* implicit */int) var_10)) >> (((var_5) - (256530425))))) : (((/* implicit */int) arr_2 [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23261)) ? (var_13) : (var_5)))) ? (((((/* implicit */_Bool) 1996638905)) ? (16193124800633346961ULL) : (((/* implicit */unsigned long long int) 4144880493U)))) : (((/* implicit */unsigned long long int) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (long long int i_8 = 2; i_8 < 15; i_8 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) 122521768)) ? (1357154098461592802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)23255)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8256)) ? (((/* implicit */int) (short)-31677)) : (((/* implicit */int) (unsigned short)3714))))) ? (((/* implicit */long long int) var_2)) : (arr_25 [i_7] [i_7]))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 14; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            arr_31 [i_10] = ((/* implicit */int) ((_Bool) max((((arr_13 [i_7] [i_7] [i_7] [19ULL] [i_7] [i_10]) ? (((/* implicit */unsigned long long int) -871442240)) : (arr_19 [i_7]))), (((/* implicit */unsigned long long int) (short)16376)))));
                            var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)52402)), (4294967283U)));
                            arr_32 [i_7] [i_7] [i_7] [i_10] = ((/* implicit */unsigned char) arr_28 [i_8] [13U] [i_10]);
                            arr_33 [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) << (((1554931153) - (1554931153)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3714))) : (arr_12 [i_7] [i_10]))) / (var_1)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    for (unsigned short i_12 = 4; i_12 < 15; i_12 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) arr_25 [i_7] [i_7]);
                            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((arr_37 [i_11] [i_11] [11] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_11] [i_8] [i_11] [8ULL]))))) >= (((/* implicit */unsigned int) var_13)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_1)))) ? (var_13) : (((((/* implicit */int) (unsigned short)65531)) ^ (((/* implicit */int) var_8))))))), (max((((var_1) - (4294967283U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (-660373123) : (((/* implicit */int) (short)31904)))))))));
}
