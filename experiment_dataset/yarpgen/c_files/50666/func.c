/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50666
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
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) max(((unsigned short)15715), ((unsigned short)65528)))) : (((/* implicit */int) (unsigned short)15718)))) | (((/* implicit */int) (signed char)-8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_13)) ? (((var_9) << (((((/* implicit */int) var_1)) - (104))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((((((/* implicit */int) ((short) var_2))) + (2147483647))) << ((((+(((/* implicit */int) var_5)))) - (2387))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
                arr_5 [i_0] = ((unsigned char) (unsigned short)15715);
                var_17 = ((/* implicit */signed char) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) min(((unsigned short)59533), (((/* implicit */unsigned short) var_3))))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_1])))) : ((-(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_18 *= ((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) <= (((unsigned int) var_11))))) > (((((((((/* implicit */int) (signed char)-8)) * (((/* implicit */int) var_11)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_10))))) - (1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned char)222))) && ((!(((/* implicit */_Bool) var_13))))));
        arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) + (arr_7 [i_2] [i_2])));
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-8))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                arr_15 [i_3] = ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_4 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_4 [i_3] [i_3 + 1] [i_4]));
                arr_16 [10ULL] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
            }
            for (short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 12; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_2] [i_3] [i_3] [i_7])) >> (((((/* implicit */int) ((unsigned char) var_2))) - (36)))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (unsigned short)15715)) : (((/* implicit */int) (short)14405))))) || (((/* implicit */_Bool) (unsigned char)0))));
                        }
                    } 
                } 
                arr_23 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_3 + 1])) ? (((/* implicit */int) arr_18 [i_2] [i_3])) : (((/* implicit */int) ((short) arr_12 [i_2] [i_3])))));
                var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)15732))));
                var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_10)))));
            }
            for (unsigned short i_8 = 2; i_8 < 14; i_8 += 3) 
            {
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (arr_10 [i_2])))))));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((var_7) <= (((((/* implicit */_Bool) (unsigned short)49825)) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_8 + 1])) : (((/* implicit */int) arr_9 [4])))))))));
                var_27 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)168)))) >= (((/* implicit */int) ((short) var_1)))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    arr_30 [i_3] [i_3] [i_8] [i_9] = ((/* implicit */unsigned long long int) var_10);
                    var_28 = ((/* implicit */short) ((((/* implicit */int) var_3)) < (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_2]) : (((/* implicit */int) var_12))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) % (((/* implicit */int) ((signed char) var_2)))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) arr_19 [i_3 + 1] [i_3 + 1] [i_8] [i_8 - 2])) : (((/* implicit */int) arr_24 [i_3 + 1] [i_8 - 2] [i_9])))))));
                }
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1628816131)) ? (((/* implicit */int) (short)-21713)) : (((/* implicit */int) (signed char)127))));
                    var_32 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_0 [i_3])))));
                }
            }
            arr_34 [i_3] [i_3] = ((/* implicit */long long int) var_12);
        }
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? ((+(((/* implicit */int) var_11)))) : ((+(((/* implicit */int) var_8))))));
            var_34 = ((/* implicit */unsigned char) var_7);
        }
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)-21717))) >> (((((/* implicit */int) var_8)) + (11)))));
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                var_36 = arr_3 [i_13] [i_12] [i_13];
                var_37 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                /* LoopNest 2 */
                for (signed char i_14 = 2; i_14 < 14; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)133))));
                            var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_44 [i_2] [i_12 + 1] [i_13])) << (((((/* implicit */int) var_0)) - (20855))))) == (((/* implicit */int) arr_24 [i_2] [i_2] [i_2]))));
                        }
                    } 
                } 
                var_40 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
            }
            var_41 = ((((/* implicit */_Bool) arr_38 [i_12 + 1] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)108)))) : (var_10));
            var_42 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_48 [i_2] [i_2] [i_2] [i_12] [i_12] [i_12] [i_12]))));
            arr_50 [i_12] = ((/* implicit */unsigned short) var_7);
        }
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned short) ((((arr_7 [i_2] [i_2]) / (((/* implicit */int) arr_29 [i_2] [i_2] [i_2] [i_2] [i_2])))) == (((/* implicit */int) var_1))));
            /* LoopSeq 1 */
            for (int i_17 = 2; i_17 < 14; i_17 += 3) 
            {
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) arr_20 [i_2] [(unsigned char)10]))));
                var_45 += ((/* implicit */unsigned int) var_4);
            }
        }
        var_46 ^= ((/* implicit */unsigned char) (~(arr_52 [(short)8] [i_2] [i_2])));
    }
}
