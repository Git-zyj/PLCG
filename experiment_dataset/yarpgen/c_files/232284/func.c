/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232284
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) 1153492156)) ^ (arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)201)) ? (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)48901)))) : (((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_1] [i_0]))))));
            var_10 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_1] [i_1]) : (-86174490)))) ? (((((/* implicit */_Bool) -1140826333)) ? (arr_0 [i_1]) : (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((var_4) * (((/* implicit */int) var_5)))))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((var_3), (((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))))) >= (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */long long int) (+(var_1)))) : (max((8866918563456210989LL), (((/* implicit */long long int) (_Bool)1))))))));
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max(((!(((/* implicit */_Bool) 0ULL)))), (((arr_3 [i_0] [i_0] [i_0]) >= (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8866918563456210989LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)13))));
                var_13 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((unsigned long long int) 4542515158387681784LL)) : (((/* implicit */unsigned long long int) 2314936126U)))));
                var_14 = min(((!(((/* implicit */_Bool) arr_13 [i_2] [i_4] [i_2])))), ((!((!(((/* implicit */_Bool) (unsigned char)209)))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16777215ULL))))) : (((/* implicit */int) ((_Bool) var_9))))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-38))))) - (var_6)));
                        var_17 = ((/* implicit */unsigned short) ((arr_14 [i_6] [i_2] [i_2] [i_0]) >> (((var_1) - (1922917781U)))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75)))))));
                    }
                    arr_23 [i_0] [i_2] [i_2] [i_6] = (~(arr_3 [i_0] [i_0] [i_5]));
                }
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_5] [i_8])) ? (((int) arr_25 [i_8] [i_5] [i_0])) : (((/* implicit */int) ((unsigned char) 2U)))));
                    var_20 |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3)))))))));
                    arr_28 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_5]);
                }
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((unsigned int) var_4));
                            arr_35 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_32 [i_0] [i_2] [i_5] [i_9] [i_2]), (((/* implicit */unsigned long long int) -488953386))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_5] [i_9] [i_2])))))) : ((~(arr_32 [i_0] [i_2] [i_5] [i_0] [i_2])))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */int) ((unsigned short) max((arr_6 [i_2] [i_2] [i_11]), (arr_6 [i_2] [i_11] [i_11]))));
                arr_38 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_2] [i_2] [i_11])), (((((/* implicit */_Bool) ((signed char) -693853957))) ? (((/* implicit */unsigned long long int) 2387544310310774931LL)) : (68719476735ULL)))));
            }
            var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (unsigned char)40))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_0] [i_2] [i_2] [i_2]))))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((min(((_Bool)1), (arr_27 [i_2]))) && (((/* implicit */_Bool) ((arr_27 [i_0]) ? (2140575761) : (((/* implicit */int) (unsigned char)184)))))))));
        }
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((int) (unsigned short)65535)) * ((-(((/* implicit */int) arr_25 [i_0] [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        arr_42 [i_12] [i_12] = ((/* implicit */long long int) (_Bool)1);
        var_26 = ((/* implicit */long long int) ((int) ((((var_8) && ((_Bool)1))) ? (((((/* implicit */_Bool) -9)) ? (arr_37 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (min((4028119093048086846LL), (((/* implicit */long long int) (unsigned char)120)))))));
    }
    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        var_27 ^= ((/* implicit */signed char) (-(((arr_25 [i_13] [i_13] [i_13]) ? (((/* implicit */int) arr_25 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_25 [i_13] [i_13] [i_13]))))));
        var_28 = ((/* implicit */long long int) (-2147483647 - 1));
    }
    for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        arr_48 [i_14] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_36 [i_14] [i_14])))));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_25 [i_14] [i_14] [i_14])))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (0ULL)))) ? (arr_31 [i_14] [i_14] [(_Bool)0] [i_14] [i_14] [i_14]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24448))))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            arr_51 [i_14] [i_15] = ((/* implicit */unsigned short) (signed char)45);
            var_30 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_14] [i_14] [i_15])), (max((0LL), (5199300657536293753LL)))));
        }
    }
    var_31 = ((/* implicit */_Bool) var_1);
    var_32 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) / (var_6)));
    var_33 += ((/* implicit */_Bool) var_1);
}
