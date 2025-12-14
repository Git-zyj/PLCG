/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196012
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
    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned long long int) var_17))) ? (((/* implicit */int) max((var_0), (var_4)))) : (((/* implicit */int) var_5)))), (((/* implicit */int) max(((signed char)50), (min(((signed char)73), (var_13))))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_16)))), (((unsigned long long int) var_9))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-51)) && (((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) var_15);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        arr_10 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)50))));
                        var_21 += ((/* implicit */unsigned int) var_0);
                    }
                }
            } 
        } 
        arr_11 [i_0 + 3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min(((signed char)44), ((signed char)73)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7194))) | (18U))) : (((/* implicit */unsigned int) arr_8 [i_0] [i_0 + 3] [i_0] [i_0])))) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        arr_12 [i_0 + 1] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) (-(386267053))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (arr_3 [i_0 + 3] [i_0 + 2])))) ? ((-(((/* implicit */int) (signed char)14)))) : (((/* implicit */int) (unsigned short)4919))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_22 &= ((/* implicit */_Bool) (~(-2281658370518116161LL)));
                    arr_18 [i_0] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-91)), ((unsigned short)58341)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) var_8)))) && ((!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-51)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */int) var_9);
                        var_24 -= ((/* implicit */_Bool) (unsigned short)58346);
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0])) ? (min((((((/* implicit */_Bool) (unsigned short)58341)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) arr_0 [17] [i_4])))), ((~(((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) ((signed char) var_11)))))));
                        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_7 + 1] [i_7 - 1] [i_5] [i_5] [i_5] [i_4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (0U) : (843617188U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21945))) : (arr_6 [i_4] [i_7 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2] [i_7 - 2])))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) ^ (7138721588876849535ULL)))))))));
                        arr_23 [i_0 + 3] [i_4] [4ULL] [i_4] [i_7 - 2] [i_4] = (-(((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-21945)) : (((/* implicit */int) var_13))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0 - 1])) ? (arr_20 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194)))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_20 [i_0 + 3]) : (arr_20 [i_0 - 2])));
                        arr_26 [15LL] [(unsigned char)5] [i_5] [(unsigned char)13] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    arr_27 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), ((+(((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2]))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 4) /* same iter space */
    {
        var_30 -= ((/* implicit */short) (-(((int) arr_6 [i_9 - 2] [i_9 + 1]))));
        var_31 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [11ULL] [i_9] [11ULL])) ? (((/* implicit */int) (unsigned short)32768)) : (arr_16 [i_9] [i_9])))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))) + (4243264886U)))))));
        arr_30 [i_9] = ((/* implicit */short) arr_22 [10ULL]);
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) 522629785);
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_41 [i_10] = (short)96;
                                var_33 -= ((/* implicit */short) ((int) min((((/* implicit */unsigned int) var_17)), (min((((/* implicit */unsigned int) -386267054)), (1453973169U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) var_5);
                                arr_49 [i_10] [i_10] [(short)8] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_9] [i_10] [i_9] [i_10] [i_11] [i_10])) * (((/* implicit */int) arr_33 [i_9 - 2] [i_9 - 2] [(unsigned short)18]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_10] [i_14] [i_11] [i_10] [i_9])) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_22 [i_9 - 2])) ? (((unsigned int) (signed char)-16)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_14] [i_9 + 3])))))));
                                var_35 = ((/* implicit */unsigned short) arr_8 [i_14] [16ULL] [i_10] [i_9]);
                                var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)58341)) ? (((/* implicit */unsigned int) -386267054)) : (2164110178U)));
                                var_37 &= (signed char)119;
                            }
                        } 
                    } 
                    var_38 &= ((/* implicit */short) min((((/* implicit */long long int) arr_16 [i_9 - 1] [(_Bool)1])), ((+(((long long int) (unsigned char)0))))));
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) var_13)))))));
    }
}
