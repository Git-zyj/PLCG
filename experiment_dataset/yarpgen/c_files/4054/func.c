/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4054
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 &= (~(((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)165)))) + (((-4820466486507944763LL) + (8623446327022210050LL))))));
                    var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [i_1 - 1]);
                    arr_9 [i_2] = max(((+(((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 1])))), (max((((/* implicit */int) (unsigned short)22320)), (((((/* implicit */int) (unsigned short)14348)) + (-1465131630))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_2]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (unsigned char)148);
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    arr_16 [i_4] [(unsigned char)4] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-25289))))), (((short) var_18))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        arr_20 [i_4] [i_4] [i_5] [(unsigned short)10] [i_5] [i_6 + 1] = ((/* implicit */int) var_0);
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */short) 16744829231279089385ULL);
                            arr_24 [i_6] [i_6] |= ((/* implicit */long long int) ((((/* implicit */int) max((var_0), (arr_17 [i_3 + 2] [i_6])))) - (((((/* implicit */_Bool) arr_17 [i_3 + 2] [i_6])) ? (((/* implicit */int) arr_17 [i_3 + 3] [i_6])) : (((/* implicit */int) arr_17 [i_3 + 1] [i_6]))))));
                        }
                        for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1244608794), ((-2147483647 - 1))))) && (((/* implicit */_Bool) 3010660527566938732LL))));
                            var_25 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) var_13))))))) || ((!(((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_5] [i_8] [i_8]))))));
                        }
                        var_26 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)25288)) ? (1701914842430462230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32391)))))));
                        var_27 |= ((/* implicit */signed char) (-(max((((/* implicit */long long int) var_11)), (arr_12 [i_3 + 2] [i_4] [i_6 - 1])))));
                        var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_30 [i_3] [i_4] [(unsigned short)14] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)205)) | (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3 + 1] [(signed char)21]))));
                        arr_31 [i_3] [14ULL] [i_5] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_3] [i_4])) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(signed char)2] [(signed char)2]))) : (1701914842430462231ULL))) - (28505ULL)))));
                        var_29 = ((((((/* implicit */int) (unsigned short)32987)) * (((/* implicit */int) (unsigned short)32987)))) << (((((/* implicit */int) arr_29 [i_3 + 1] [i_3 + 3] [(unsigned short)24] [(_Bool)1])) - (167))));
                        var_30 = ((/* implicit */long long int) 1701914842430462217ULL);
                        var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3 + 3] [i_3 + 3] [i_5] [i_9] [i_5])) - (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1])) : (var_5)));
                    }
                    var_32 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) max((((/* implicit */unsigned short) (short)-25289)), ((unsigned short)43650)))))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3 + 2])))))));
                    arr_32 [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_3] [i_4] [i_4])), (max((((/* implicit */unsigned short) arr_14 [i_3 - 1] [i_3 + 1] [i_4])), (var_15)))));
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                {
                    arr_35 [i_3] [i_4] [(unsigned short)18] |= ((/* implicit */short) (+(max(((-(arr_23 [i_3 - 1] [(unsigned short)19] [i_3 - 1] [(unsigned short)19] [i_10]))), (((/* implicit */long long int) var_11))))));
                    var_33 = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 1701914842430462217ULL)) || (((/* implicit */_Bool) var_3))))), (arr_17 [i_3 - 1] [i_4])));
                }
                for (short i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned short) ((short) max((arr_27 [(_Bool)1] [i_4] [i_3]), (((arr_8 [i_4] [i_4] [i_4] [i_3]) ^ (((/* implicit */int) var_14)))))));
                    var_35 = (~(((((/* implicit */int) arr_14 [i_3 - 1] [i_3 + 2] [8])) + (((/* implicit */int) arr_14 [i_3 + 2] [i_3 + 2] [14LL])))));
                }
                arr_38 [i_4] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 11534172185058712220ULL))))));
            }
        } 
    } 
}
