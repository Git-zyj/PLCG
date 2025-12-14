/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205321
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
    var_12 = ((/* implicit */unsigned int) max((var_12), ((-(var_9)))));
    var_13 = ((/* implicit */int) min((max((var_2), (var_2))), (((((/* implicit */long long int) max((((/* implicit */int) var_1)), (180305374)))) / (var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_2))));
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) 180305361);
                    arr_9 [i_0] [i_2] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) | (((/* implicit */int) var_1))))) ^ (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1] [i_2]) : (var_10))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max((arr_4 [i_0] [i_0] [i_0]), (arr_6 [i_2] [i_0] [i_0] [i_0])))), (arr_5 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((-180305374), (-270958920)));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3 + 2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [11LL])) || (((/* implicit */_Bool) var_8))))), ((unsigned short)58872))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (arr_1 [i_0] [i_3 + 4])))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 65535LL))))), (((((/* implicit */_Bool) var_9)) ? (180305355) : (((/* implicit */int) (unsigned char)137))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [(short)6] [(unsigned char)19] [i_4]))))), (min((((/* implicit */long long int) (unsigned short)6672)), (var_8)))))) : (max(((+(var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
                                var_17 -= ((/* implicit */short) arr_4 [i_0] [(short)17] [i_4]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [(signed char)0] [15ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [10] [10])) && (((/* implicit */_Bool) var_0)))))) : (max((((/* implicit */unsigned long long int) arr_11 [i_0] [2ULL] [i_0] [i_0])), (var_10))))), (((/* implicit */unsigned long long int) ((short) arr_10 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 21; i_7 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)6672))));
                    var_20 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)58870), (((/* implicit */unsigned short) (_Bool)0)))))) * (arr_19 [19ULL] [i_6] [i_7 + 1]));
                    arr_23 [12ULL] [12ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_20 [(unsigned char)18] [i_6] [(unsigned char)18])) + (2147483647))) >> (((var_10) - (17004427335062318101ULL)))));
                    arr_24 [i_7 - 2] [i_5] [i_5] = arr_14 [(unsigned short)17] [(unsigned short)17] [2] [(unsigned char)12] [(unsigned char)12];
                    var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_7 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((180305365) > (((/* implicit */int) (unsigned short)6672))))), ((-(min((var_2), (((/* implicit */long long int) var_9))))))));
}
