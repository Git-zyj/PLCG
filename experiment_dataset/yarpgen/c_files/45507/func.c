/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45507
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
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (var_4) : (var_12))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_2])), (var_17)))))));
                            var_20 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_3] [6ULL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)49152))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_18), (((/* implicit */short) arr_0 [i_2])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (var_14)))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-32)) + (2147483647))) << (((((/* implicit */int) (unsigned short)49152)) - (49152)))))))))));
                            var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((signed char)-32), ((signed char)-32)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2))))))) : ((~(((unsigned long long int) var_5))))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_16))));
                            var_24 -= ((/* implicit */unsigned long long int) (signed char)-40);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (arr_17 [i_0 + 3] [i_1] [i_1 + 1] [i_2] [i_6]))), (((/* implicit */unsigned long long int) 4203043408U)))))));
                            var_26 -= ((/* implicit */short) ((((int) max((var_12), (var_9)))) | (((/* implicit */int) ((signed char) var_3)))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))))));
                        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? ((+(((/* implicit */int) arr_4 [i_3] [i_1] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)27201)) : (352967771)))) ? (((/* implicit */int) (unsigned short)41780)) : (((/* implicit */int) arr_10 [i_0 + 2] [i_1 - 1] [i_2] [i_3]))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_29 += ((/* implicit */unsigned int) (!((!(arr_12 [i_0 - 1] [i_3] [i_3] [i_3] [i_1] [i_0 - 1])))));
                            var_30 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14524967380279743963ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (3921776693429807652ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_1] [i_0 - 1] [i_3] [(_Bool)1] [i_3] [i_0] [i_0]))))) : (min((var_12), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0 - 1] [i_3] [i_0] [i_3] [i_0] [i_0]))))));
                            var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2] [i_3])) ? (((arr_16 [i_3] [i_1 - 1]) >> (((-1133713585) + (1133713632))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_20 [i_1] [i_1 + 2] [i_1] [i_3] [(unsigned char)10] [i_1])) + (arr_15 [5U] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) * (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [(unsigned char)14] [i_3])))))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (max((((arr_8 [i_3] [i_1 + 1] [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((-(arr_21 [5ULL] [5ULL] [8ULL] [i_2] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1LL)) ^ (var_4)))) && (((/* implicit */_Bool) arr_20 [i_7] [i_3] [i_3] [i_3] [i_0] [i_0])))))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                        {
                            var_33 -= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0 - 2] [i_1 - 1]) % (arr_2 [i_0 + 1] [i_1 + 1])))) ? ((~(arr_2 [i_0 - 2] [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                            var_34 += ((/* implicit */short) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_0]), (((/* implicit */signed char) var_5)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_9))), (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_7))))))) : (var_4)));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_3))))) ? (((unsigned long long int) arr_8 [i_3] [i_2] [i_3])) : (((/* implicit */unsigned long long int) max((arr_2 [(_Bool)0] [(_Bool)0]), (((/* implicit */unsigned int) arr_8 [i_3] [i_2] [i_3])))))))) ? (max((((((/* implicit */_Bool) 2305772640469516288ULL)) ? (6454343325769770561ULL) : (15100309951401360070ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_7)))))))))));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) 5960162244515153402ULL))))))));
                        }
                        for (unsigned short i_10 = 1; i_10 < 14; i_10 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), ((((!(var_5))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_3))))), (max((var_12), (((/* implicit */unsigned long long int) var_16)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            var_38 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -352967790)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (max((var_13), (((/* implicit */unsigned long long int) 1292286271U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 15; i_11 += 4) 
                    {
                        var_39 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_8 [i_11] [i_1 + 2] [i_0 + 3]), (arr_8 [i_11] [i_1 + 1] [i_0 - 2]))))));
                        arr_32 [i_0] [i_0] [i_1] [(_Bool)0] [i_11] |= max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (var_10)))), (arr_18 [i_0] [8ULL] [i_2] [i_11] [i_11]));
                        var_40 += ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_20 [i_11 - 1] [i_0 - 1] [(unsigned char)0] [i_11] [i_11] [i_1])), (((((/* implicit */_Bool) arr_20 [i_11 + 1] [i_0 + 1] [i_0 + 1] [i_11] [i_2] [i_2])) ? (((/* implicit */int) arr_20 [i_11 - 2] [i_0 + 2] [i_2] [i_11] [i_11] [0ULL])) : (((/* implicit */int) var_15))))));
                        var_41 += ((/* implicit */_Bool) ((unsigned long long int) (~(((((/* implicit */int) arr_19 [(unsigned char)5] [i_1] [1] [4] [i_1 + 2] [i_1])) << (((/* implicit */int) arr_18 [i_1] [12ULL] [i_11] [i_11] [i_1])))))));
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_18)))) || (((/* implicit */_Bool) (-(min((((/* implicit */int) arr_23 [i_11])), (arr_15 [i_0] [i_1] [(_Bool)0] [i_11] [i_1] [i_2] [i_0])))))))))));
                    }
                    var_43 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [(_Bool)0] [(_Bool)1] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_19 [i_0 - 2] [12ULL] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_19 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) max((var_8), (((/* implicit */short) arr_6 [i_0 - 2] [(signed char)2] [(signed char)2] [i_1 - 1]))))) : (((/* implicit */int) ((unsigned short) arr_19 [i_0 - 1] [(_Bool)1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 3])))));
                    var_44 *= ((/* implicit */unsigned long long int) (~((+((~(((/* implicit */int) var_5))))))));
                    var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))))), (var_1))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_46 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
        var_47 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1122277795U)) & (arr_33 [i_12] [(_Bool)1])));
    }
    for (unsigned long long int i_13 = 2; i_13 < 24; i_13 += 1) 
    {
        var_48 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_38 [i_13 - 1])) ? (((((/* implicit */_Bool) arr_38 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (12496027367441198160ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 3) 
            {
                {
                    var_49 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-32))));
                    var_50 -= 16371253091699862087ULL;
                    var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_43 [i_15 + 2] [i_13 + 1] [i_13 + 1])) ? (arr_43 [i_15 + 1] [i_14] [i_13 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_52 = ((/* implicit */unsigned long long int) min((var_52), (max((max((arr_36 [16] [i_16]), (((/* implicit */unsigned long long int) var_16)))), (((((/* implicit */_Bool) arr_18 [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_36 [16LL] [i_16])))))));
        var_53 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16383)) ? (5605895990692686508ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) var_7))));
        var_55 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((9595977406278576191ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11)))))))) ? (((max((((/* implicit */unsigned long long int) var_8)), (var_2))) + (max((1047406075670886370ULL), (((/* implicit */unsigned long long int) (unsigned short)49152)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_42 [i_16] [i_16] [i_16] [i_16])), (var_18)))))));
        var_56 |= ((/* implicit */int) (-(((unsigned int) ((var_9) == (var_4))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        var_57 = ((/* implicit */unsigned long long int) max((var_57), (14524967380279743974ULL)));
        var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_17] [6LL]))))), (((((/* implicit */unsigned long long int) arr_2 [i_17] [i_17])) | ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_12))))))))));
    }
    var_59 &= ((/* implicit */_Bool) var_3);
}
