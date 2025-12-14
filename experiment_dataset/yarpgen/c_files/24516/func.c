/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24516
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
    var_20 *= ((/* implicit */short) ((unsigned char) ((long long int) var_9)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (((unsigned int) var_10))));
        var_21 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-11360), (((/* implicit */short) var_15)))))) | (((unsigned long long int) 583333990))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                arr_11 [i_0] [i_1] [i_2] = ((4981229716497218124LL) << (((((-6843859580761303997LL) + (6843859580761304028LL))) - (31LL))));
                arr_12 [(unsigned short)18] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 764336783U))) ? (((/* implicit */unsigned long long int) -1955331041)) : (var_5)));
                arr_13 [i_0] = ((/* implicit */signed char) ((unsigned short) (short)-15031));
            }
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_22 = (+(((((/* implicit */unsigned long long int) var_12)) + (16182367819835783837ULL))));
                var_23 += ((/* implicit */unsigned long long int) ((short) var_18));
                var_24 = ((/* implicit */unsigned short) ((signed char) ((short) var_12)));
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_25 = ((/* implicit */int) (unsigned short)57344);
                    var_26 = ((_Bool) var_9);
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)1513)))));
                    arr_22 [i_0 - 1] &= ((/* implicit */short) ((long long int) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_5))));
                    var_28 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32761)) / (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11882))))) : (((unsigned long long int) 16182367819835783837ULL)));
                }
                for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned long long int) ((unsigned short) 1955331058));
                    arr_26 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((signed char) var_3));
                }
                for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) 1872388799))));
                    var_31 -= ((/* implicit */unsigned long long int) ((signed char) var_11));
                    var_32 -= (short)(-32767 - 1);
                }
                arr_31 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-16)) ? (3351180439322273776ULL) : (var_11))));
            }
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            var_33 -= ((/* implicit */short) var_15);
                            arr_40 [i_0 - 1] [i_7] [i_0] [(short)16] [i_7] [i_0] &= ((unsigned short) ((unsigned short) var_4));
                            var_34 *= ((/* implicit */_Bool) var_12);
                        }
                        for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 2) 
                        {
                            var_35 = ((/* implicit */_Bool) var_16);
                            var_36 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 3983069265U))) && (((/* implicit */_Bool) ((-6292066641807313362LL) ^ (((/* implicit */long long int) var_12)))))));
                        }
                        for (short i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            arr_47 [i_1] [(short)5] = ((/* implicit */long long int) var_19);
                            var_37 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8191)) * (((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                        arr_48 [(short)5] [11ULL] [i_1] [i_0 - 1] [i_0] = (unsigned char)173;
                        var_38 = ((unsigned long long int) var_2);
                    }
                } 
            } 
        }
        for (short i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            arr_51 [(short)1] [(short)1] = ((/* implicit */unsigned short) var_4);
            var_39 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (-1416443105892105172LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32184))))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))));
        }
        var_40 -= ((/* implicit */short) (signed char)127);
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21386)) / (((/* implicit */int) var_17))))) + (min((((/* implicit */unsigned int) (unsigned short)1)), (311898030U)))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)57342)), (max((((/* implicit */unsigned long long int) 311898019U)), (18446744056529682432ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3983069276U)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) var_16)))), (((/* implicit */int) (signed char)112)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    for (unsigned char i_17 = 1; i_17 < 17; i_17 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) ((long long int) 1295989434135283300ULL));
                            var_43 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) var_12)) / (var_10))));
                        }
                    } 
                } 
            } 
            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) var_13))));
            /* LoopSeq 1 */
            for (unsigned int i_18 = 0; i_18 < 19; i_18 += 3) 
            {
                arr_67 [i_13 - 1] [i_13 - 1] [i_14] [(unsigned short)14] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_8)))));
                var_45 += ((/* implicit */signed char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (var_11))), (((/* implicit */unsigned long long int) var_6)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                var_46 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)-3325)))) | (((((/* implicit */int) var_13)) ^ (var_0)))))) ^ (((((/* implicit */_Bool) var_7)) ? (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)192))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-127)), (var_12))))))));
            }
        }
        arr_68 [(_Bool)0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)6793)) ? (18446744073709551615ULL) : (6157388528741368458ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16))))));
    }
    var_47 = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) * (6584004665527112791ULL)));
}
