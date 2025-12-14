/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235894
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
    var_11 += var_10;
    var_12 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max(((signed char)0), (((/* implicit */signed char) var_7))))) : (((((/* implicit */int) ((7657939348702267244LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) max((var_7), (var_5))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2] [i_0] [i_0] = ((short) 3557929256420500912LL);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] = min(((+(arr_8 [(short)3] [i_1] [i_1 - 1] [i_0]))), (((/* implicit */long long int) var_3)));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_4])))))));
                            arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_0 [i_0])))))) ? (arr_0 [i_0]) : (((/* implicit */int) arr_3 [i_3]))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */signed char) arr_2 [i_0] [i_5]);
                            arr_16 [i_0] [i_1 - 1] = ((/* implicit */short) var_4);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                            arr_20 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)3), (((/* implicit */short) var_5))))) ? ((~(((/* implicit */int) var_5)))) : (arr_1 [i_1 - 1] [7LL])))) % ((((-(arr_8 [i_0] [i_2] [i_1 + 1] [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_3] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [(short)5])) : (((/* implicit */int) (short)21070))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)47))))) : (-1019233888990637190LL))))));
                            var_15 = ((/* implicit */long long int) (+((~(arr_1 [i_3] [(_Bool)1])))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned char) var_0);
                            arr_25 [i_0] [i_3] = ((/* implicit */short) min(((-(8178609085109966570LL))), (((/* implicit */long long int) ((_Bool) arr_10 [i_3] [i_1 + 1] [(short)0] [i_1 - 1] [i_1])))));
                            var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-25515))))) ? (((/* implicit */long long int) (-(arr_1 [i_7] [i_3])))) : (arr_23 [i_0] [i_1 + 2] [i_2] [i_3] [i_7])))) ? (((((/* implicit */int) var_4)) << ((((+(((/* implicit */int) var_6)))) - (27874))))) : (((/* implicit */int) arr_18 [(signed char)7] [i_3] [i_3] [i_3] [(_Bool)1]))));
                            arr_26 [i_0] [2LL] [i_2] [2LL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) 478452225))), (((long long int) var_1))))) ? (((/* implicit */int) ((short) arr_2 [i_3] [16]))) : (((((/* implicit */_Bool) min(((short)-20073), (arr_15 [i_1] [i_2] [i_3])))) ? (((/* implicit */int) (short)-11217)) : (((((/* implicit */int) var_0)) | (((/* implicit */int) (_Bool)1))))))));
                            arr_27 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)1)))) >> ((((~(((/* implicit */int) var_10)))) + (26144))))));
                        }
                        var_18 |= arr_17 [i_1 + 1] [i_1] [i_2];
                    }
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */int) ((signed char) (unsigned char)199))), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_7)))));
                        arr_32 [i_0] [i_2] [i_8] [8] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) (short)15813)) == (((((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_1 - 1])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((int) (_Bool)1))))));
                    }
                    for (signed char i_9 = 3; i_9 < 19; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            var_19 += ((/* implicit */_Bool) (signed char)16);
                            var_20 = ((/* implicit */short) min(((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))), (((/* implicit */int) var_6))));
                            var_21 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) arr_2 [i_0] [i_1 - 1])))));
                        }
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) arr_28 [i_0] [i_1] [i_1]);
                            var_23 = ((/* implicit */signed char) ((_Bool) min((-1250495206146112067LL), (((/* implicit */long long int) max(((short)-22199), (arr_7 [i_0] [i_0] [i_9] [i_11])))))));
                        }
                        arr_41 [i_0] [i_0] [i_2] [i_9] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)1))))) && (var_5)))) == ((~((+(((/* implicit */int) (unsigned short)65535)))))))))));
                        var_25 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_39 [i_9 - 2] [i_9 + 2] [i_2] [i_9] [i_1] [i_1 + 2])))));
                    }
                    var_26 ^= ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)120)) | (((/* implicit */int) (signed char)18))))), (((long long int) (signed char)22)))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)52567)))) ? (((/* implicit */long long int) max((max((-1895387710), (-642217449))), (((/* implicit */int) max((((/* implicit */signed char) var_7)), ((signed char)109))))))) : (((long long int) min((arr_40 [i_0] [i_0] [i_0] [i_1] [i_2]), (117700129651242845LL))))));
                    arr_42 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) (~((+(min((arr_23 [i_2] [i_2] [(signed char)13] [i_2] [i_2]), (((/* implicit */long long int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
