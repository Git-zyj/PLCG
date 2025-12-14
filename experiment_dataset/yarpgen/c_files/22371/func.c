/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22371
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43491))) : (-4816475714400883883LL)))) ? (((((-4816475714400883883LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22049))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43497))))) : (((/* implicit */long long int) ((((-277351689) == (((/* implicit */int) (unsigned short)22044)))) ? (((((/* implicit */int) (unsigned short)65518)) - (((/* implicit */int) var_2)))) : (((/* implicit */int) var_0)))))));
    var_17 = ((/* implicit */unsigned int) (unsigned short)22039);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned short)65518))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_19 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                            var_20 = ((/* implicit */_Bool) (-(1U)));
                            arr_14 [i_4] [i_3] [(short)16] [(unsigned char)17] [i_1] [i_4] = (~(-4816475714400883883LL));
                        }
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_9 [i_2 - 1] [i_1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_10)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(short)0] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) arr_1 [i_5] [i_0])) : (((arr_3 [i_0] [i_1 - 1] [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)43496))))) == (((/* implicit */int) (unsigned short)43519)))) ? (4ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)17)), ((+(1589433073U)))))))))));
                            var_23 += ((/* implicit */unsigned char) var_12);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_24 += ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)43503))))), (((unsigned short) 4294967292U))));
            arr_20 [3LL] [i_0] = ((arr_3 [(unsigned short)3] [i_6] [i_6]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((-7303878980573508699LL) == (((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_7))))))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [1] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22045))) : (arr_7 [i_0] [i_7] [i_7] [(unsigned short)13])));
            arr_24 [5LL] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (unsigned short)22044))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63)) ? (-261447331) : (((/* implicit */int) (unsigned short)65513))));
            /* LoopSeq 3 */
            for (unsigned int i_8 = 3; i_8 < 19; i_8 += 3) 
            {
                var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_8] [i_7] [i_0] [i_0] [4ULL])) != (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_8 - 3] [i_8]))));
                arr_28 [i_8] [i_8] [i_7] [i_0] = ((/* implicit */long long int) ((unsigned short) var_2));
                var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)43505))))));
            }
            for (unsigned char i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 20; i_10 += 3) 
                {
                    for (unsigned short i_11 = 3; i_11 < 20; i_11 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)19))) % (9223372036854775807LL)));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32756))) : (arr_13 [i_0] [i_7] [i_9] [i_0] [i_0]))))))));
                            var_31 += ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0]);
                        }
                    } 
                } 
                arr_36 [i_9] [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)22045))))))));
                var_32 = ((/* implicit */int) (+(arr_8 [i_9] [i_9 - 1])));
                arr_37 [i_9] [i_9] [(short)20] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22033)) ? (15U) : (((/* implicit */unsigned int) 525072637))));
            }
            for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 4) 
            {
                var_33 = ((/* implicit */short) (unsigned short)22052);
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) arr_43 [i_7] [i_12 - 1] [i_13] [i_14]);
                            var_35 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [(signed char)5]))))) : (var_10));
                        }
                    } 
                } 
            }
        }
        var_36 += ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)43487)))), ((+(((/* implicit */int) var_8))))));
    }
    for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (13691286184592319451ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6281)))));
        var_38 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_15 - 1] [i_15 + 2]))))), (arr_41 [i_15] [i_15 - 1])));
        var_39 = ((/* implicit */int) arr_1 [i_15] [i_15]);
        var_40 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)200))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned short)17))))))));
        var_41 = ((/* implicit */signed char) ((((((/* implicit */int) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) var_12)))))) >> (((/* implicit */int) ((-5LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) < (((/* implicit */int) arr_48 [i_15]))));
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 4) /* same iter space */
    {
        arr_51 [i_16] = ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)22062)) - (22052))));
        var_42 = ((/* implicit */unsigned short) var_9);
        var_43 = ((/* implicit */long long int) ((((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned char)64)))) ^ (((/* implicit */int) ((((/* implicit */long long int) arr_47 [i_16])) != (arr_1 [i_16] [i_16]))))));
        arr_52 [i_16] = ((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17)))));
    }
}
