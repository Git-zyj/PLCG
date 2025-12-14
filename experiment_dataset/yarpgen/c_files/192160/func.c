/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192160
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
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_3)), (((10102794505936240477ULL) >> (((((/* implicit */int) (unsigned char)202)) - (188)))))));
    var_17 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) == (12189279622080702709ULL))))) > (((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-714118912))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [4U] [(signed char)4] = ((/* implicit */unsigned long long int) var_11);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
                                arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 - 1] [(unsigned char)3] [i_4 + 1])) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -714118925)) : (var_3))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_5)) == (var_6))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (signed char)1))))) ? (arr_5 [i_0] [i_1] [4]) : (((/* implicit */int) (!(((/* implicit */_Bool) 13498363047027747525ULL))))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((-(max((((/* implicit */unsigned long long int) arr_12 [(short)10] [(short)10] [9ULL] [i_2] [i_1] [9ULL])), (var_14))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_3]))) <= (max((((/* implicit */long long int) arr_5 [i_2] [(_Bool)1] [i_2])), (var_3))))))))))));
                                var_20 ^= ((/* implicit */int) arr_8 [i_0] [0U] [i_2] [i_3] [i_4]);
                                arr_14 [i_1] [i_3] [i_2 + 2] [2] [i_1] = ((/* implicit */unsigned char) max((arr_1 [i_0] [(short)4]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_4 - 1] [i_4] [i_4 - 1])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 4] [i_0]);
                    arr_15 [3LL] [3LL] [i_1] [i_2 - 1] = (unsigned short)65528;
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            for (unsigned short i_7 = 3; i_7 < 10; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_22 += ((/* implicit */unsigned char) (_Bool)0);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 11; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)165)) && (((/* implicit */_Bool) arr_21 [i_6])))))) ^ (arr_8 [i_7] [i_6] [i_7 + 2] [i_7 + 2] [i_7 - 1])));
                            var_24 = var_11;
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                        {
                            arr_32 [i_10] [i_6] [i_7] [i_10] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) arr_23 [i_6] [i_7 - 3] [i_7 + 3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27639))) ^ (var_1))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((6257464451628848907ULL), (((/* implicit */unsigned long long int) 986980478U))))) ? (((/* implicit */unsigned int) arr_1 [i_6 - 1] [i_6 - 1])) : (min((arr_10 [i_10 - 1] [i_10 + 1] [i_8] [(short)5] [i_7 + 3] [i_6 + 2] [(unsigned char)9]), (arr_10 [i_10 - 1] [i_10 - 1] [(unsigned short)11] [i_8] [i_7 - 1] [i_6 - 1] [8U]))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_11 = 3; i_11 < 12; i_11 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
            {
                arr_37 [i_11] = ((/* implicit */unsigned char) ((unsigned short) arr_8 [6] [(_Bool)1] [i_11 + 1] [i_11] [i_12]));
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) 4ULL);
                            arr_43 [i_13] [i_11] [6] = ((/* implicit */unsigned int) arr_42 [i_5] [i_5] [i_5]);
                            arr_44 [i_5] [i_5] [i_5] [i_5] [i_13] [i_5] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5] [i_11] [i_12])) ? (arr_10 [i_5] [i_11] [i_12] [i_13] [i_13] [i_13] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_11])))))) ? (min((((/* implicit */unsigned int) var_2)), (67043328U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11 + 1] [i_11 - 1] [i_13 - 1] [i_13 - 1])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_15 = 2; i_15 < 10; i_15 += 3) 
                {
                    var_27 = ((/* implicit */signed char) max((((/* implicit */int) min((arr_11 [i_5]), (arr_11 [i_15])))), (min((1693815541), (((/* implicit */int) (unsigned short)3206))))));
                    var_28 = ((/* implicit */int) (+((~(arr_0 [i_5] [i_11 + 1])))));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned int) (short)847);
                arr_51 [i_5] [i_11 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)64654)) && (((/* implicit */_Bool) 1475077553)))));
                var_30 = ((/* implicit */_Bool) min((max((var_10), ((~(16746422455350569534ULL))))), (13765913034056396278ULL)));
                var_31 = ((/* implicit */unsigned long long int) ((318221278U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5])))));
            }
            var_32 = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)181))))));
            var_33 += ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_28 [i_5] [i_5] [i_11] [(short)12] [i_11])), ((short)2040))))) : (((arr_31 [0ULL] [(_Bool)1] [i_5] [i_5] [i_11 - 1] [i_11 - 1]) ? (((/* implicit */unsigned int) (-(arr_5 [i_5] [i_5] [i_5])))) : (arr_21 [(signed char)2])))));
            arr_52 [i_5] = ((/* implicit */unsigned char) arr_16 [i_11]);
        }
        arr_53 [i_5] = ((/* implicit */unsigned char) max((arr_33 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_2))));
    }
    var_34 |= ((/* implicit */unsigned long long int) 714118883);
}
