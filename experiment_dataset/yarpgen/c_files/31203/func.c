/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31203
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
    var_12 += ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_3);
        var_13 = ((/* implicit */unsigned int) (_Bool)1);
        var_14 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-100)) ? (var_8) : (((/* implicit */unsigned int) var_9)))))), (288230376151711743LL)));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_15 = ((/* implicit */int) ((signed char) (~(var_9))));
            arr_5 [i_1] = ((/* implicit */int) (short)12733);
            var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-83)) ? (var_10) : (((/* implicit */unsigned int) ((((-1214188100) + (2147483647))) << (((var_9) - (910475518))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_17 &= ((/* implicit */signed char) (+((+(((/* implicit */int) var_4))))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [2ULL] [i_2] [i_2]))) / (arr_3 [i_0] [i_2])))))) >= (((long long int) min((-288230376151711744LL), (((/* implicit */long long int) var_11)))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_19 &= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (17070753231022476458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1])))))) ? ((-(288230376151711752LL))) : (((/* implicit */long long int) 4225063201U)))));
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_20 [i_0] [2U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(var_5)))));
                            arr_21 [i_0] [2U] [i_4] [i_5 - 1] &= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-117)) / (var_9)))) && (((/* implicit */_Bool) 288230376151711743LL)))) ? (((((/* implicit */_Bool) ((arr_3 [i_0] [21U]) << (((((/* implicit */int) arr_17 [i_0] [i_4] [i_5] [i_6])) - (24780)))))) ? (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [15U]))))) : (var_10))) : (((min((((/* implicit */unsigned int) (unsigned short)26150)), (var_11))) << (((min((-2021422137), (((/* implicit */int) var_4)))) + (2021422141)))))));
                            arr_22 [i_4] [i_5] [i_4] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-11745)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))), ((-(arr_13 [i_5] [i_5 - 1] [i_5 - 1] [i_5])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */long long int) arr_0 [i_0] [i_3])) : (arr_14 [11] [i_3] [i_3] [i_3] [i_3] [i_3])))) : ((-(5415715593968798606ULL))))))));
                var_21 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)82))));
                var_22 = ((/* implicit */unsigned int) ((short) ((min((((/* implicit */unsigned int) var_2)), (var_11))) > (((/* implicit */unsigned int) ((var_9) / (((/* implicit */int) (short)32767))))))));
            }
            var_23 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_7 [(unsigned char)0] [(_Bool)1] [(_Bool)1]))))));
            var_24 = ((/* implicit */short) arr_15 [i_0] [i_0] [(unsigned short)1] [i_3]);
            var_25 |= ((/* implicit */short) (-(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_9))))) ? (max((((/* implicit */int) (signed char)76)), (arr_11 [i_0] [i_0] [i_0]))) : (((/* implicit */int) (unsigned short)60738))))));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_3))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [12LL])) : (((/* implicit */int) var_4)))))))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (short)21801))));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    arr_32 [i_9] [i_9] [2] [i_7] [i_9] [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7]))));
                    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)1545)) ^ (((/* implicit */int) var_2)))) & ((~(var_7))))))));
                }
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10))))))) >> ((((-(((((/* implicit */_Bool) var_10)) ? (arr_25 [i_0] [i_0] [i_8] [i_7]) : (var_9))))) - (1010550519))))))));
            }
            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-288230376151711754LL))) * (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)47347)) / (((/* implicit */int) var_2)))))))));
            /* LoopSeq 1 */
            for (int i_10 = 2; i_10 < 21; i_10 += 3) 
            {
                arr_35 [i_7] [i_7] [18] [i_0] |= ((/* implicit */short) ((((((/* implicit */_Bool) 3710476360944097810ULL)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (3888092013786096771ULL)))))) ? (max((13031028479740752998ULL), (10447094108328798762ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)63512)) && (((/* implicit */_Bool) var_3))))))))));
                var_32 = ((/* implicit */unsigned short) arr_26 [i_7]);
                var_33 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) != (((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2198))) * (var_5)))), (15699246398997032582ULL)))));
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((((/* implicit */_Bool) arr_11 [i_13 - 1] [i_13 - 1] [i_12])) ? (((/* implicit */unsigned int) ((int) var_2))) : (((unsigned int) 13493101070550203717ULL))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_12]))));
                                arr_49 [i_14] [i_14] [i_15] [i_14] [i_15] [i_14] |= ((/* implicit */int) (!(((/* implicit */_Bool) 189528988U))));
                                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (+(((/* implicit */int) var_4)))))));
                                var_37 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_17 [(signed char)19] [i_12] [22ULL] [22ULL]))) | (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63323)) / (((/* implicit */int) (unsigned short)63782))))) ? (var_11) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
                    var_39 = ((/* implicit */short) var_9);
                }
            } 
        } 
        var_40 = ((/* implicit */int) arr_33 [i_11] [i_11] [i_11] [i_11]);
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (unsigned short)2198))));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 24; i_16 += 2) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                var_42 = ((/* implicit */unsigned char) var_0);
                var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) -7920579296854905378LL))));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-26284))));
    var_45 = ((/* implicit */unsigned short) min((var_45), (var_0)));
}
