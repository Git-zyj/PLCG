/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239379
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
    var_11 = var_4;
    var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) ((short) (unsigned char)74))) : (((/* implicit */int) var_8)))), ((+(((/* implicit */int) ((unsigned char) var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 2]))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (-4050768085503716989LL)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) (+((-2147483647 - 1))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) 4050768085503716988LL)) : (arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] [i_3])))))));
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_3] [i_3] [i_4] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) : (arr_7 [i_0]))))), (((((/* implicit */_Bool) arr_10 [i_0] [(short)6] [i_1] [i_3] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1])))))) : (arr_2 [i_0])))));
                                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)34057)) ? (arr_4 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 3]))))), (((/* implicit */long long int) arr_5 [i_2]))));
                                var_15 ^= ((/* implicit */_Bool) ((max((((((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_3 [(unsigned short)4])))), (((/* implicit */int) min((((/* implicit */short) var_6)), (arr_3 [i_1])))))) + (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)34038)) : (((/* implicit */int) (unsigned short)12603)))), (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_10 [i_0 - 2] [i_1] [i_1] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_0 - 2]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_16 *= ((/* implicit */_Bool) max((((/* implicit */int) var_5)), ((((!(((/* implicit */_Bool) (unsigned char)5)))) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)20)) && (((/* implicit */_Bool) arr_15 [i_5])))))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 4; i_6 < 10; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    {
                        var_17 = ((/* implicit */short) min(((unsigned char)103), (((/* implicit */unsigned char) (_Bool)1))));
                        var_18 = ((/* implicit */unsigned char) ((short) var_6));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_5) && (((/* implicit */_Bool) arr_5 [i_5])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_5 [i_6])))) : (((/* implicit */int) var_2))))) ? (min((max((-4245773218458008321LL), (((/* implicit */long long int) (unsigned short)4838)))), (((/* implicit */long long int) arr_8 [i_5] [i_8] [i_7] [i_8])))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_2)))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = 3; i_10 < 22; i_10 += 3) 
        {
            var_20 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 1528158070289950369ULL)) ? (((/* implicit */int) (unsigned short)64686)) : ((+(((/* implicit */int) var_4)))))));
            arr_28 [i_9] [i_10 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_7)), (arr_24 [i_9] [i_10 + 1]))), (((/* implicit */unsigned long long int) var_4))))) ? (((((arr_24 [i_9] [i_9]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5263096601242991638LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)64686)))))));
        }
        for (unsigned char i_11 = 2; i_11 < 22; i_11 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) arr_31 [i_9] [i_9] [i_11 + 1]);
            var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)48)) ? (1796256601U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31503))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9] [i_11 + 1])))))), (arr_30 [i_9] [i_11 + 1])));
            arr_32 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_11 - 2] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))) : (arr_27 [i_11 - 1] [i_11 - 1])))) ? (arr_27 [i_11 + 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        }
        var_23 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) -1383874147)))));
    }
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        arr_36 [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)31479))));
        var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_33 [i_12])) ? ((+(arr_24 [(_Bool)1] [i_12]))) : (arr_24 [i_12] [i_12])))));
    }
    for (int i_13 = 0; i_13 < 12; i_13 += 3) 
    {
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((-3002600598188112324LL) % (((/* implicit */long long int) ((/* implicit */int) var_6))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_13])) ? (((/* implicit */int) arr_35 [(unsigned short)2])) : (((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 830095443U)) ? (arr_31 [i_13] [i_13] [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52933)))))) ? (((/* implicit */int) (unsigned short)0)) : ((-(((/* implicit */int) var_7))))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4163925471046268395LL)) ? (var_9) : (arr_27 [(_Bool)1] [i_13])))) && (((/* implicit */_Bool) -1798028240508692361LL))));
    }
}
