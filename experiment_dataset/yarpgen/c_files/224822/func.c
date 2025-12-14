/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224822
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 2704730309U)) ? (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((unsigned long long int) var_15)) : (((11105919941181948042ULL) * (4282421362749456510ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) % (var_3)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (11105919941181948042ULL)));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_18)) - (((/* implicit */int) var_7))))));
                var_23 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_16)) : (arr_4 [i_1] [i_2 + 3] [10LL])));
            }
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((2278416931150935787ULL) == (var_9)))) <= (((/* implicit */int) (unsigned short)11252))));
                arr_12 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_3] [i_0] [i_3] [i_1])) ? (1450674029U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))))));
            }
            /* vectorizable */
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [0] [i_4])) : (((((/* implicit */_Bool) 8352281252588701543ULL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_1] [i_0] [i_1] [i_0]))))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1]);
                var_26 &= ((/* implicit */long long int) ((arr_8 [i_0] [i_1] [12]) >= (arr_8 [i_4 + 1] [i_4] [i_4 + 1])));
            }
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_1] [i_1] [i_1] [i_0]) >> (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) ((int) 2775971645U))) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (unsigned char)106);
                        var_29 = ((/* implicit */unsigned int) ((13733414152181404366ULL) > (13733414152181404348ULL)));
                        var_30 &= 1590236986U;
                        arr_26 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((arr_9 [i_1]), (((/* implicit */unsigned short) arr_25 [7LL] [i_0] [i_0] [i_0]))))) ? (1221867734017629584ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6917)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                var_31 -= ((/* implicit */unsigned short) arr_23 [i_1] [(_Bool)1] [i_1] [(short)2] [9ULL]);
                arr_29 [i_7] [i_7] [i_7] = ((/* implicit */long long int) max((((short) var_13)), (((/* implicit */short) (signed char)4))));
                var_32 += ((/* implicit */short) var_17);
                var_33 &= ((/* implicit */long long int) ((short) ((arr_4 [i_0] [i_1] [i_7]) > (arr_4 [i_0] [i_1] [i_7]))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                var_34 = ((/* implicit */short) min((var_34), (var_12)));
                var_35 &= (!(((/* implicit */_Bool) ((int) arr_25 [i_8] [(_Bool)1] [(unsigned char)7] [8LL]))));
                var_36 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)13)), (11105919941181948042ULL)))) ? (((((/* implicit */_Bool) min(((unsigned short)45075), (((/* implicit */unsigned short) (unsigned char)124))))) ? (arr_24 [i_8] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((unsigned int) arr_10 [i_0] [i_1] [i_8] [(signed char)2]))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_21 [i_8] [i_1] [i_0]), (arr_21 [i_0] [i_1] [i_8])))))));
            }
        }
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((unsigned char) arr_9 [i_0])))));
        var_38 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]))) + (((((/* implicit */_Bool) var_1)) ? (arr_8 [i_0] [13LL] [i_0]) : (var_3)))))));
    }
    for (short i_9 = 4; i_9 < 12; i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = ((unsigned long long int) ((signed char) var_3));
        var_39 = ((/* implicit */int) ((((unsigned long long int) -429463256)) >> (((arr_35 [i_9 + 1]) - (arr_35 [i_9 - 2])))));
    }
    for (short i_10 = 4; i_10 < 12; i_10 += 1) /* same iter space */
    {
        var_40 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_10 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-79))))), (((((/* implicit */_Bool) 2278416931150935791ULL)) ? (3914048630661714856ULL) : (2278416931150935787ULL)))));
        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((_Bool) arr_40 [i_10])))));
        var_42 *= ((/* implicit */unsigned int) arr_39 [i_10 - 1]);
        arr_41 [i_10] = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_5))) - (min((((/* implicit */long long int) (_Bool)1)), (-4851388683268459668LL))))), (((/* implicit */long long int) (short)23599))));
        arr_42 [i_10] = ((/* implicit */unsigned long long int) var_14);
    }
    for (short i_11 = 4; i_11 < 12; i_11 += 1) /* same iter space */
    {
        var_43 -= ((/* implicit */unsigned long long int) arr_36 [i_11]);
        var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_17))));
        var_45 = ((/* implicit */short) (unsigned short)32176);
        arr_46 [i_11 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_11])) < (((/* implicit */int) var_12))));
    }
    var_46 &= ((/* implicit */int) var_4);
}
