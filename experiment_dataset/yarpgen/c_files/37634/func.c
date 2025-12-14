/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37634
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */int) 4875761275882550753LL);
        var_15 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) 4875761275882550765LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_16 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [(_Bool)1])))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (min((((/* implicit */long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (((long long int) var_10)))) : (((/* implicit */long long int) ((((int) var_13)) / (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) 520221384U))))))))));
        var_18 *= ((/* implicit */unsigned int) (unsigned char)170);
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_19 -= ((/* implicit */short) max(((+(arr_0 [i_1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1])))))));
        /* LoopSeq 4 */
        for (short i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            var_20 = ((/* implicit */short) (unsigned char)170);
            arr_10 [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-18369))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_13 [i_1] = ((/* implicit */unsigned char) ((((unsigned int) var_4)) > ((+(var_3)))));
            arr_14 [8] = ((/* implicit */unsigned int) ((unsigned short) arr_4 [i_1]));
            /* LoopSeq 3 */
            for (long long int i_4 = 3; i_4 < 12; i_4 += 2) /* same iter space */
            {
                var_21 |= ((((/* implicit */int) var_13)) % (((/* implicit */int) ((_Bool) (unsigned char)140))));
                var_22 = ((/* implicit */_Bool) var_12);
            }
            for (long long int i_5 = 3; i_5 < 12; i_5 += 2) /* same iter space */
            {
                var_23 &= ((/* implicit */_Bool) (~(arr_19 [i_1] [4LL] [i_5 + 1])));
                var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-8449)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) / ((~(((/* implicit */int) (short)-5867))))));
            }
            for (long long int i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) (~(arr_21 [i_1] [i_1] [(unsigned char)7] [(unsigned char)7]))))));
                arr_23 [i_1] [i_3] [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) / (arr_18 [i_1] [i_1] [i_1] [i_1])));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-30066))))) ? (1908141872U) : (((/* implicit */unsigned int) ((int) (_Bool)0)))));
            }
            var_27 = ((/* implicit */unsigned int) (unsigned char)85);
            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_11 [i_3]));
        }
        for (signed char i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_28 *= ((/* implicit */short) var_5);
                            var_29 += ((/* implicit */_Bool) min(((((_Bool)0) ? (arr_18 [i_7 + 1] [i_8 + 1] [i_8 + 1] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (~(-1406298685))))));
                        }
                    } 
                } 
                var_30 ^= ((/* implicit */_Bool) ((unsigned char) ((signed char) 18208929452198468252ULL)));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 3; i_12 < 13; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) | (var_9)))) || (((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (_Bool)0)), (arr_39 [i_1]))))))));
                            var_32 |= ((/* implicit */unsigned char) ((((((4875761275882550753LL) % (((/* implicit */long long int) var_4)))) % (((/* implicit */long long int) ((/* implicit */int) min((var_13), (var_11))))))) == (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned char)170))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (-4875761275882550775LL) : (((/* implicit */long long int) var_0))))), (arr_3 [i_1]))))));
                            var_34 = ((/* implicit */long long int) ((((((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1]))))) % (arr_27 [i_13] [i_1] [i_1])));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (unsigned char)231)) > (((/* implicit */int) (unsigned char)24)))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_14 = 3; i_14 < 10; i_14 += 2) 
            {
                arr_45 [i_14] = ((/* implicit */int) ((min((((((/* implicit */_Bool) 3576245599U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_14 + 3] [i_1]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((7880246803897664524ULL) - (7880246803897664501ULL)))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_14 + 1])) / (((/* implicit */int) arr_12 [i_7 - 1])))))));
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_27 [i_1] [i_7] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((var_10) % (arr_21 [i_1] [i_7 + 1] [i_7] [i_14])))) : (((unsigned long long int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1])) ? (711967437U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_14 + 4] [i_7])))))))) : (((((/* implicit */_Bool) ((var_9) % (var_9)))) ? (((((/* implicit */_Bool) 2963225272460040190ULL)) ? (var_3) : (3287564581U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                var_37 *= ((/* implicit */unsigned char) ((arr_39 [i_7 + 1]) + (((arr_39 [i_7 - 2]) - (var_10)))));
            }
            arr_46 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_43 [i_7] [i_7] [i_7 - 1] [i_7 + 1])))));
            var_38 = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (short)15836))))) * (min((var_10), (((/* implicit */unsigned int) var_7)))))));
        }
        for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 2) 
        {
            arr_50 [8ULL] [i_1] [i_15] = ((/* implicit */short) (+(((arr_35 [i_1] [i_15]) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_14))))))));
            arr_51 [i_1] [i_15 + 3] = ((/* implicit */short) (((-((+(((/* implicit */int) arr_5 [i_15])))))) | (max((((/* implicit */int) var_1)), (arr_16 [i_1] [i_15 + 2] [i_15])))));
            var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_2)))));
        }
    }
    var_40 = ((/* implicit */short) ((max((((/* implicit */unsigned int) ((int) 4179510665U))), (var_4))) % (((/* implicit */unsigned int) ((int) max((((/* implicit */short) (unsigned char)254)), ((short)11156)))))));
}
