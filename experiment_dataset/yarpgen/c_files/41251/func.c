/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41251
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) && (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)65535))))))), (var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned char) (((-(((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) arr_7 [i_0])))))) / (((((/* implicit */_Bool) (short)-31538)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)9398)) : (arr_0 [i_0]))) : ((+(((/* implicit */int) (signed char)30))))))));
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [(unsigned short)7] [i_1] [i_2 + 1]) + (1539586617)))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)24658))))) ? (((((/* implicit */_Bool) 576050175)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (-2453841766081401173LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-27960)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 - 3] [i_3] [i_1] [i_2 - 3] = ((/* implicit */short) min((((/* implicit */signed char) (_Bool)0)), (((signed char) min((arr_5 [i_4] [i_1] [i_2 - 1]), (((/* implicit */unsigned short) (_Bool)1)))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((766701936), (((/* implicit */int) max((((/* implicit */short) (signed char)126)), ((short)12990))))))) ? (var_7) : (((int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) : (var_10)))), (((arr_14 [i_2 + 1] [i_2 - 3] [i_2 + 1] [i_2 - 2] [i_2 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        arr_18 [(unsigned short)6] [i_1] [i_2 - 1] [i_5] [i_5] = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) max(((_Bool)0), (arr_7 [i_0])))), (min((arr_12 [i_0] [i_1] [i_2 + 1]), (((/* implicit */long long int) (signed char)-70))))))));
                        arr_19 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)33733);
                        arr_20 [i_5] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(15837794322231329950ULL)))) ? (((int) (short)8631)) : ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1])) ? (-576050178) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5 - 2] [i_5 - 2]))))) : (((min((((/* implicit */long long int) (_Bool)1)), (arr_12 [i_0] [i_1] [i_2 - 3]))) | (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    arr_30 [i_6] [i_8] [i_8] = ((/* implicit */_Bool) arr_24 [i_6]);
                    arr_31 [i_6] [i_6] [i_7 + 4] [i_8] = ((/* implicit */signed char) var_4);
                }
                for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
                {
                    var_20 ^= ((/* implicit */short) var_1);
                    arr_34 [i_6] [i_7] [i_7] = ((/* implicit */signed char) (_Bool)1);
                    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) arr_22 [i_7 + 3] [i_7 + 3]))), (((unsigned int) (+(((/* implicit */int) var_6)))))));
                }
                arr_35 [i_6] = ((signed char) max((((/* implicit */int) arr_33 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 3])), (((((/* implicit */_Bool) (short)-8631)) ? (((/* implicit */int) (unsigned short)55586)) : (((/* implicit */int) (unsigned short)17312))))));
            }
        } 
    } 
}
