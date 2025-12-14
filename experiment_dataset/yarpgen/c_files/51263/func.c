/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51263
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
    var_11 = ((((/* implicit */_Bool) var_2)) ? ((+((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) max((((/* implicit */short) var_7)), (var_10)))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_5)))) : (((/* implicit */int) var_6))));
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned int) ((((unsigned long long int) 851983873)) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59405)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))) : (2179985289U))))));
            arr_6 [i_0] = ((/* implicit */signed char) (+(var_4)));
        }
        for (long long int i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_2 + 1] [i_2 + 1]) : (arr_2 [i_2 + 1] [i_2 - 1])))) ? (((arr_2 [i_2 + 1] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_2 [i_2 + 1] [i_2])))));
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((max((((/* implicit */long long int) var_10)), (arr_7 [i_0] [i_2]))), (arr_1 [i_0] [i_2 - 1])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_16 ^= var_3;
                var_17 = ((/* implicit */int) (-(var_4)));
                arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1])) ? (arr_7 [i_2 - 1] [i_2]) : (arr_7 [i_2 - 2] [i_2])));
                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)59405))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_5))))) : (arr_2 [i_2] [i_2 - 1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1095699798)) ? (((/* implicit */int) (short)32767)) : (-1095699799)))) ? (((/* implicit */int) (signed char)12)) : (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */short) ((1843539778U) ^ (((/* implicit */unsigned int) -841513282))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-27559)))))));
                        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((5801837268747012180ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [(signed char)7])))))) << (((((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 + 1])) + (2534)))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_27 [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-30698))));
                        var_23 = ((/* implicit */unsigned int) (~(var_1)));
                    }
                }
                var_24 *= ((/* implicit */short) ((((unsigned long long int) var_9)) >> (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_12 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 1])))))));
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_32 [i_0] [i_2] [i_2] [i_0] [(_Bool)1] [(short)0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8 - 1] [i_2 - 1]))) : (arr_20 [i_2] [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_20 [i_2] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8 - 1] [i_2 - 1]))) : (arr_20 [i_2] [i_2 + 1] [i_2 + 1])))));
                        var_25 = max((((/* implicit */short) ((_Bool) min((var_1), (((/* implicit */long long int) (_Bool)1)))))), (((short) arr_3 [i_2] [(unsigned char)3] [i_2])));
                    }
                } 
            } 
        }
        arr_33 [3ULL] = ((/* implicit */int) var_6);
        var_26 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [(unsigned char)8] [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_0] [(short)3]))))));
    }
    for (int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)25)), (((long long int) ((((/* implicit */_Bool) var_0)) ? (0LL) : (((/* implicit */long long int) var_3)))))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                {
                    arr_45 [(short)2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 3768163864U)) ? (((/* implicit */int) (short)-4962)) : (2147483647))));
                    arr_46 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-927081064)))) ? ((-(-1095699799))) : (((/* implicit */int) (short)-30270))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 3; i_14 < 9; i_14 += 4) 
                        {
                            {
                                arr_53 [4] [i_13] [i_12] [i_11] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))))))));
                                var_28 = ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (_Bool)1)) : (511));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-7741)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) (signed char)12)))), (((/* implicit */long long int) (~((+(var_0))))))));
                    var_30 = ((((/* implicit */_Bool) (+(arr_36 [i_10])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_36 [i_10]))))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_8)))));
                }
            } 
        } 
    }
}
