/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206262
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_5);
                arr_6 [i_0] = ((/* implicit */signed char) var_5);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2 + 1])) ? (((/* implicit */long long int) arr_10 [i_1 - 1] [i_2 + 1])) : (-1896543672300945645LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_1 - 1] [i_2 - 1]))))));
                            arr_12 [i_3] [(unsigned char)18] [i_1] [9ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (min((1896543672300945644LL), (((/* implicit */long long int) var_10)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((var_12), (min((((/* implicit */long long int) (short)-17200)), (1896543672300945644LL)))));
    /* LoopSeq 3 */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    arr_22 [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_5 + 1] [i_5 - 1] [i_5 + 2]))))) ? (((/* implicit */int) (!(arr_18 [i_5 + 2] [i_5 + 1] [i_5 + 2])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [i_5 + 2] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1]))))));
                    arr_23 [i_5 + 2] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_14 [i_4] [i_5]))))) ? (((unsigned long long int) 9775628112840844852ULL)) : (((unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_5])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (unsigned short i_8 = 2; i_8 < 22; i_8 += 1) 
            {
                {
                    arr_28 [4LL] [i_8] [i_8] [20LL] = var_4;
                    arr_29 [i_8] [i_8] = ((/* implicit */long long int) var_2);
                }
            } 
        } 
        arr_30 [5LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (short)19612)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_20 [i_4] [8LL] [8LL] [i_4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9))) : (arr_21 [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) var_8))))) : (((((/* implicit */_Bool) min(((unsigned short)31981), (var_9)))) ? (((/* implicit */int) (short)17779)) : (((/* implicit */int) var_1)))));
        arr_31 [(unsigned char)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) 4294967294U)), (-2309952830645718470LL))), (((/* implicit */long long int) arr_24 [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) (~(2309952830645718469LL)))) ? (max((137438953471ULL), (((/* implicit */unsigned long long int) (short)5086)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4))))));
    }
    for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_4)))))) ? (max((min((9775628112840844852ULL), (((/* implicit */unsigned long long int) -2309952830645718465LL)))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_9))))))) : (((/* implicit */unsigned long long int) -5590367015860478429LL))));
        /* LoopNest 2 */
        for (short i_10 = 2; i_10 < 8; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) arr_18 [i_9] [i_10] [i_11])) : (((/* implicit */int) arr_18 [i_10 + 1] [i_10 - 1] [(signed char)0])))))))));
                    arr_38 [i_9] [i_10] [i_10] [i_10] = ((/* implicit */int) var_0);
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_8))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */long long int) ((((arr_13 [i_11] [i_9]) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) var_9)))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))) - (33533U)))))), (max((((((/* implicit */_Bool) (signed char)70)) ? (var_8) : (-868177353434321186LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16153)) ? (((/* implicit */int) (short)16003)) : (((/* implicit */int) (unsigned short)4912))))))))))));
                }
            } 
        } 
        arr_39 [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_32 [i_9]), (arr_32 [i_9])))), (min((18034912696726119711ULL), (((/* implicit */unsigned long long int) (unsigned char)220))))));
        arr_40 [i_9] = ((/* implicit */signed char) -1954288927);
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_9] [i_9]))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
                        arr_50 [6ULL] [i_9] = ((/* implicit */short) (~(max((((8456638763157207730ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7168))))), (((/* implicit */unsigned long long int) (signed char)72))))));
                        arr_51 [i_9] = ((/* implicit */unsigned long long int) max((2251799813685248LL), ((-(683002271280966275LL)))));
                    }
                } 
            } 
        } 
    }
    for (int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
    {
        arr_55 [i_15] = ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 2 */
        for (long long int i_16 = 2; i_16 < 9; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                {
                    arr_63 [i_15] [i_15] [i_17] [i_17] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (signed char)-53)), (var_6))), (var_6)));
                    var_18 = ((short) (~(((/* implicit */int) ((signed char) var_6)))));
                    arr_64 [i_15] [i_17] [i_15] |= ((/* implicit */long long int) var_1);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((min((arr_41 [i_15] [i_17]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_20 [i_15] [i_16 + 1] [i_17] [5U]) : (((/* implicit */long long int) arr_45 [i_15] [i_16 - 1] [i_17]))))))))));
                }
            } 
        } 
    }
}
