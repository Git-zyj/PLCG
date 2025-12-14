/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30332
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)127)), (arr_2 [i_0] [(unsigned short)5])))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (!((_Bool)1)))))))));
        var_12 += ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (var_4))))) - (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_0 [i_0])))));
                        var_14 &= ((/* implicit */short) var_4);
                        arr_11 [i_3] [i_2] [i_2] [(unsigned short)14] = ((/* implicit */long long int) ((((/* implicit */long long int) var_4)) < (((long long int) min(((short)16352), (((/* implicit */short) var_9)))))));
                        var_15 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned long long int) 2805454237U))));
                    }
                    var_16 ^= var_1;
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) : (max((6901841822800637347LL), (((/* implicit */long long int) (_Bool)1))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        var_19 = ((/* implicit */unsigned short) min(((-(var_5))), (((/* implicit */unsigned long long int) var_6))));
    }
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((6901841822800637347LL), (((/* implicit */long long int) (_Bool)0))))) ^ (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) 620422782))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3758))) : ((+(var_1)))));
                    arr_23 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)7422)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6]))) : (arr_6 [i_7] [i_7]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))))))))) ? (min((((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)3758)))), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) 981701341))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((16633679879138252511ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) | (var_1)))) ? (min((((/* implicit */long long int) var_2)), (arr_3 [i_5] [i_6] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-10783))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_3)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) : (1813064194571299129ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_8) : (var_10))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)33800))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 2537456374U)) : (-469659623470317118LL)))))), (((unsigned char) ((((/* implicit */_Bool) (unsigned short)61792)) ? (var_5) : (8671286997639738203ULL)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 8; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                {
                    var_23 ^= ((/* implicit */short) (-((+((~(var_5)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                arr_33 [i_5] [i_8] [i_5] [i_9] [i_10] [6U] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [i_8] [(_Bool)1] [(unsigned short)8] [i_8])), ((unsigned short)3758)))) ? (arr_29 [i_11] [8LL] [i_8] [i_5] [i_8] [i_5]) : (((/* implicit */long long int) ((((-981701313) + (2147483647))) >> (((arr_24 [i_8]) - (50707387638552291LL)))))))));
                                var_24 = ((/* implicit */short) (~((~(((/* implicit */int) arr_26 [i_8]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((620422782) ^ (((/* implicit */int) arr_31 [i_5] [i_5] [i_8] [(unsigned short)1] [i_8 + 2] [i_9] [(unsigned char)5]))))), ((~(var_1)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))) : ((-(((/* implicit */int) arr_5 [i_8 + 2]))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2926303642400035800ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (var_10)))) - (min((((/* implicit */unsigned long long int) arr_17 [i_9] [i_8] [(short)1])), (var_1)))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 4; i_12 < 20; i_12 += 3) 
    {
        for (short i_13 = 1; i_13 < 19; i_13 += 3) 
        {
            for (long long int i_14 = 1; i_14 < 21; i_14 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) (+(72057594037927935LL)));
                    arr_43 [i_12] [i_12] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-20870))))), (max((((((/* implicit */_Bool) var_7)) ? (145717313U) : (((/* implicit */unsigned int) arr_36 [i_12] [i_12])))), (((/* implicit */unsigned int) arr_42 [i_12] [i_13] [14ULL]))))));
                    var_28 = (~(max((max((15520440431309515816ULL), (((/* implicit */unsigned long long int) arr_40 [i_12])))), (((/* implicit */unsigned long long int) arr_41 [i_14 - 1] [i_12] [i_12 - 2])))));
                }
            } 
        } 
    } 
    var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4149249983U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max(((~(-4503464093850771751LL))), (((/* implicit */long long int) var_0))))));
    var_30 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (var_3)));
}
