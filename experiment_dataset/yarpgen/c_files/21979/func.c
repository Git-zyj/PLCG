/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21979
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(3239044398058787387LL))))));
                    var_16 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) arr_11 [(unsigned short)22] [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2] [i_4]);
                                var_18 = ((/* implicit */unsigned int) min((4173815605631601178ULL), (((/* implicit */unsigned long long int) 1))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967285U)) ? ((-2147483647 - 1)) : (-2147483645)));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_2] = max((((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10627))) : (arr_3 [i_0 - 3]))), (((/* implicit */unsigned int) (unsigned char)18)));
                            var_19 = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)15))));
                            arr_19 [i_0] [i_0] [i_0] = var_2;
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [6ULL] = ((/* implicit */unsigned short) var_9);
                            var_20 = var_1;
                            var_21 = ((/* implicit */unsigned long long int) ((((arr_12 [i_0] [i_1] [i_0] [i_2] [i_0] [i_0] [(unsigned char)16]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-13783)))) + (((/* implicit */int) arr_16 [1LL] [i_0 + 2] [i_2] [i_5] [i_5 + 1] [i_2] [i_1]))));
                        }
                        arr_25 [i_0 - 3] [i_1] [i_2] [i_5] [i_1] [i_5 + 1] = ((/* implicit */_Bool) ((max((arr_14 [i_0 + 2] [i_0]), (arr_14 [i_0 + 2] [i_0 + 2]))) << (((max((arr_14 [i_0 + 2] [i_0]), (((/* implicit */unsigned long long int) var_0)))) - (13407940078706989509ULL)))));
                        arr_26 [i_1] = ((/* implicit */short) ((((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105))))) >> (((((/* implicit */int) min((((/* implicit */short) arr_11 [i_0] [i_0] [i_2] [i_5] [i_2] [i_0])), ((short)20773)))) - (45))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((arr_7 [i_0 - 1] [i_0 + 1]) >= (arr_7 [i_0 - 1] [i_0 + 1])));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1]))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 3] [i_2] [i_0 - 3] [8ULL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [11LL] [i_0 - 1] [i_2] [i_8] [(unsigned short)1]))));
                    }
                    arr_29 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (~(14070136475170348748ULL)));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned short)43156))))) : (((((/* implicit */int) var_14)) | (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) var_6)) : (var_4)));
    var_26 = ((/* implicit */unsigned char) var_7);
}
