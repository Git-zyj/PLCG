/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202401
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 &= ((short) 18446744073709551615ULL);
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((signed char) 15238814492342891845ULL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_13 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)32757))));
                    var_19 = ((/* implicit */long long int) 3207929581366659787ULL);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (var_1))))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_24 [i_0] [i_0] [i_6] [i_7] [18] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_7))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (var_6)));
                        arr_25 [i_0] [19U] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) var_11));
                        var_22 = ((/* implicit */long long int) ((var_1) ^ (((/* implicit */int) (short)32750))));
                        var_23 -= (!((_Bool)1));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) (((_Bool)1) && (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_14))))));
                arr_28 [(_Bool)1] [18LL] [i_8] &= ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_9)))));
            }
            for (short i_9 = 1; i_9 < 20; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        {
                            arr_39 [i_11 + 1] [i_10] [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((short) (short)32757));
                            arr_40 [i_0] [i_5] [(_Bool)1] = ((/* implicit */signed char) ((unsigned int) var_9));
                            var_25 = ((/* implicit */long long int) ((((10271459421082757232ULL) % (((/* implicit */unsigned long long int) var_14)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) != (((unsigned long long int) (unsigned char)234))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */unsigned long long int) ((269996228U) >> (((var_14) + (1820704671197474482LL)))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                var_28 = (+(1309963000));
                arr_45 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_15)));
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) 4024971067U))))))));
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1478200375U)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (short)-10643))))) ? (((unsigned long long int) 1816367033)) : (((/* implicit */unsigned long long int) ((9223372036854775807LL) << (((((/* implicit */int) var_5)) - (66))))))));
            }
            for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                var_31 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned char)79)))))) : (((long long int) (short)10619))));
                var_32 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32751))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_33 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        {
                            arr_60 [i_0] = ((/* implicit */short) ((4611686018427387904ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)5293))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            arr_63 [i_0] = ((/* implicit */long long int) ((unsigned int) -13));
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
        {
            for (unsigned short i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned long long int) (-(var_14)));
                    arr_70 [i_0] [i_0] [i_20] = ((/* implicit */int) ((unsigned char) ((unsigned int) var_3)));
                    var_37 += ((/* implicit */unsigned long long int) ((unsigned short) 255LL));
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (13360743914896110777ULL))))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) (short)32747)))), (((var_4) / (var_1)))));
}
