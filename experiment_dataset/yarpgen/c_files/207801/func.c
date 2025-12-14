/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207801
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_15 *= ((/* implicit */int) (((~(min((var_1), (2026364677))))) < (-2026364678)));
        arr_3 [i_0] [i_0] = 1908116642;
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_16 = ((/* implicit */int) ((-894450566) >= ((-(var_14)))));
            var_17 = (-(max((arr_5 [1]), (2087022283))));
            var_18 = min((((int) arr_5 [i_0])), (max((arr_5 [16]), (var_1))));
            var_19 ^= arr_5 [i_0];
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 15; i_2 += 2) /* same iter space */
        {
            arr_8 [i_2] = ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2])) ? (arr_7 [i_2 + 1] [i_2 - 1]) : (1251304548));
            var_20 |= ((((/* implicit */_Bool) var_11)) ? (((((var_4) + (2147483647))) << (((((-1933155765) + (1933155778))) - (11))))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (-1251304567))));
            var_21 = -1425956085;
            var_22 &= ((((((/* implicit */_Bool) -1382583971)) ? (-1382583959) : (var_11))) - (((var_7) + ((-2147483647 - 1)))));
        }
        for (int i_3 = 3; i_3 < 15; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            arr_20 [16] [16] [i_5] &= min((var_5), (((((/* implicit */_Bool) ((var_9) & (-929035061)))) ? (-1908116632) : (((int) arr_14 [i_0] [i_4 - 1] [i_5])))));
                            var_23 &= (~(2026364695));
                            var_24 = var_3;
                            var_25 = ((int) ((-1177180852) / ((-(arr_11 [13] [i_3 - 1] [i_3 - 1] [i_3])))));
                        }
                    } 
                } 
            } 
            var_26 = ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_3] [i_3]) : (((/* implicit */int) ((((int) arr_17 [i_0] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3])) <= ((+(arr_4 [i_0] [i_3])))))));
        }
        for (int i_7 = 3; i_7 < 15; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_9])) ? (((((-1028937271) + (2147483647))) << (((((-1017825542) + (1017825552))) - (10))))) : (((arr_10 [i_7]) % (var_0)))))) ? (((int) ((var_1) - (arr_10 [i_7])))) : (((((/* implicit */_Bool) var_2)) ? (1073741824) : (arr_28 [i_7 - 2] [i_7 + 2] [i_7] [i_7 + 2]))));
                        var_28 = ((int) arr_26 [i_7] [i_7 - 1] [i_8] [1]);
                        var_29 = var_2;
                    }
                } 
            } 
            var_30 = ((min((((((/* implicit */_Bool) -21523468)) ? (-1797782600) : (1069547520))), ((~(-1908116624))))) % (min((min((1207167791), (-1778464126))), (max((arr_21 [i_0]), (arr_18 [i_0] [i_0] [i_7] [i_7] [i_0] [i_7]))))));
        }
    }
    for (int i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        arr_34 [18] = (-(((int) -2048)));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    {
                        var_31 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-1902492851) : (-1315460878)))) ? (2114929479) : (((((arr_36 [9] [i_12] [i_13]) + (2147483647))) << (((1055345437) - (1055345437)))))));
                        var_32 = ((int) (-(-2046)));
                        var_33 = max((((/* implicit */int) ((255157873) <= (arr_32 [i_10])))), (((((/* implicit */_Bool) -4)) ? (arr_42 [i_10] [i_11] [i_12] [i_12] [12]) : (var_9))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */int) max((var_34), (((int) (~(arr_40 [i_10]))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                {
                    arr_48 [i_14] [i_14] = ((((/* implicit */_Bool) (~(((696439769) & (2)))))) ? ((-((+(arr_32 [i_10]))))) : (-1));
                    var_35 = ((/* implicit */int) ((1293294872) <= (2)));
                }
            } 
        } 
        arr_49 [14] = ((int) max((arr_47 [i_10] [i_10] [i_10]), (0)));
    }
    for (int i_16 = 3; i_16 < 11; i_16 += 4) 
    {
        var_36 = ((((/* implicit */_Bool) (-(((int) 349396141))))) ? (((int) ((((/* implicit */_Bool) arr_19 [i_16] [2] [2] [16] [i_16])) ? (536870911) : (-4)))) : ((-(arr_51 [i_16 - 2]))));
        var_37 -= ((/* implicit */int) ((var_10) >= (((int) ((arr_0 [i_16]) + (var_9))))));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            for (int i_18 = 0; i_18 < 12; i_18 += 2) 
            {
                for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    {
                        var_38 = (((~(max((arr_38 [i_16] [i_17] [i_18]), (var_1))))) >> ((((+(((((/* implicit */_Bool) var_14)) ? (1309534614) : (-1038087488))))) - (1309534606))));
                        arr_60 [i_16] [i_16] [i_16 - 3] [i_16] [i_16 + 1] = 1251304548;
                    }
                } 
            } 
        } 
        var_39 = ((int) max((((((/* implicit */_Bool) -1933155764)) ? (arr_50 [2] [2]) : (2147483647))), ((-(-1051101568)))));
    }
    var_40 = max((((int) -610719353)), (((int) var_5)));
    var_41 = ((/* implicit */int) max((var_41), (var_4)));
}
