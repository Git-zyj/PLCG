/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34295
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), ((signed char)120)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] = ((min((min((var_0), (((/* implicit */unsigned int) (signed char)-121)))), (((/* implicit */unsigned int) var_13)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) + (var_1)))) ? (((/* implicit */int) ((unsigned short) (signed char)-126))) : (((int) arr_5 [i_0] [i_1] [i_3 + 1]))))));
                                arr_11 [i_3] [i_3] |= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (short)-10156)) || (((/* implicit */_Bool) 12574067387526607436ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (max((var_1), (((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_5] [i_5])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_5])))))))) ? (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_5] [i_0]), (((/* implicit */long long int) var_6)))))))) : (((/* implicit */int) var_18))));
            arr_14 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (6988382328024424410ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))))) == (((/* implicit */unsigned long long int) arr_12 [i_5] [i_0] [i_0 + 1]))))) <= (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != ((-(((/* implicit */int) arr_2 [i_0])))))))));
        }
        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_17 [i_0] [18ULL] = (+(((/* implicit */int) (unsigned short)29535)));
            arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_1 [i_0])))) <= ((-(12574067387526607436ULL)))))) & (((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) (signed char)-123))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            arr_21 [i_0] [i_0] [i_7] = ((/* implicit */signed char) arr_1 [i_7]);
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */unsigned long long int) var_11)) * (var_14)))));
        }
        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            arr_24 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -5494643849106984894LL)), (((((/* implicit */_Bool) -5494643849106984894LL)) ? (((/* implicit */unsigned long long int) var_13)) : (7958505038533351706ULL)))))) ? (((((/* implicit */_Bool) arr_13 [i_0])) ? (8469416650962342836ULL) : (((/* implicit */unsigned long long int) arr_13 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763))) : (15454688067970424272ULL))))))));
            var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))) != (var_5))))) ? (((((/* implicit */unsigned long long int) -1)) * (3467883750430978426ULL))) : (18446744073709551604ULL)));
        }
        /* LoopSeq 2 */
        for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_17))))))), (var_9)))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) max((((unsigned long long int) ((unsigned long long int) arr_0 [i_0]))), (min((((/* implicit */unsigned long long int) ((long long int) arr_13 [i_9]))), (min((var_4), (((/* implicit */unsigned long long int) arr_15 [i_9])))))))))));
        }
        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3145728ULL))));
            /* LoopNest 2 */
            for (signed char i_11 = 2; i_11 < 23; i_11 += 2) 
            {
                for (short i_12 = 4; i_12 < 23; i_12 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) arr_5 [i_11] [i_10] [i_10]);
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((6988382328024424410ULL), (((/* implicit */unsigned long long int) -11)))))));
                        arr_40 [i_0] = ((long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 3467883750430978426ULL)) ? (11458361745685127206ULL) : (2992056005739127343ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned short)7043)) : (((/* implicit */int) (short)-32763)))))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
    {
        for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            {
                arr_46 [i_14] [i_13] [i_14] = ((/* implicit */unsigned short) ((unsigned int) (short)32748));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 15454688067970424259ULL)) ? (((/* implicit */unsigned long long int) 58720256)) : (3145754ULL))) < (arr_42 [i_13])));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((18446744073709551615ULL) / (var_5))) / ((+(var_4))))))));
                    var_30 |= ((/* implicit */unsigned long long int) ((arr_30 [i_14] [i_14]) ^ (((/* implicit */long long int) arr_27 [i_15 + 1]))));
                }
                var_31 |= ((/* implicit */unsigned long long int) var_15);
                arr_49 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-7886608188228667300LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 6988382328024424403ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)10270)))))))) ? (((/* implicit */unsigned long long int) ((int) min((12574067387526607453ULL), (12574067387526607442ULL))))) : ((~(10242810741441959755ULL)))));
            }
        } 
    } 
}
