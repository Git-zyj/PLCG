/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212512
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((5834874186356723709LL) + ((((+(5039922900808037722LL))) - ((-(-5834874186356723706LL)))))));
        var_14 = ((/* implicit */signed char) ((short) (-(((long long int) var_8)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) ((signed char) ((long long int) var_7)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((int) ((5834874186356723709LL) << (((((/* implicit */int) (_Bool)1)) - (1))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)63))))) & (((unsigned int) var_11))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (unsigned char)63)))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(-5834874186356723709LL))))));
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
    {
        arr_13 [4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) ((_Bool) 5834874186356723736LL))) != (((int) (unsigned char)63)))))));
        arr_14 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_9 [i_4] [i_4] [i_4] [i_4])))) && (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && ((_Bool)1)))));
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            arr_17 [i_5] [16U] [i_4] = ((long long int) ((unsigned int) (!(((/* implicit */_Bool) -5261958564849796992LL)))));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((int) ((short) (-(var_3))))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18010000462970880LL)) && (((/* implicit */_Bool) arr_12 [i_6] [i_7])))))) > (((long long int) (-9223372036854775807LL - 1LL)))))))))));
                var_22 = ((/* implicit */signed char) (-(((int) ((long long int) -5834874186356723733LL)))));
                var_23 *= ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)136)))) * (((((/* implicit */int) arr_10 [i_4] [i_4] [i_7])) / (((/* implicit */int) (_Bool)1))))))) || ((!(((/* implicit */_Bool) ((short) arr_6 [i_4] [i_4] [i_4])))))));
            }
            for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                var_24 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */long long int) var_7)) % (4179011767080300779LL)))) >> (((unsigned int) ((arr_9 [i_6] [i_6] [i_8] [i_6]) == (var_1))))));
                arr_26 [10LL] [i_8] [i_8] [8LL] = ((/* implicit */unsigned int) ((unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) - (arr_8 [i_4] [i_4] [i_8] [i_4]))))));
                var_25 ^= (+((~(((var_11) / (var_12))))));
            }
            var_26 = ((/* implicit */unsigned char) ((((_Bool) ((_Bool) 328744562846157682LL))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((arr_0 [i_6]) && (((/* implicit */_Bool) arr_15 [i_4] [14LL] [(unsigned char)4]))))))))));
            arr_27 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (!((_Bool)1))))) <= (((/* implicit */int) ((_Bool) ((long long int) var_13))))));
            arr_28 [i_4] = ((unsigned short) ((int) ((unsigned short) -5472122536046945453LL)));
            var_27 = ((/* implicit */int) ((((long long int) ((_Bool) arr_7 [i_6] [i_4] [i_4]))) > ((+((+(5039922900808037712LL)))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        for (unsigned int i_10 = 1; i_10 < 14; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        {
                            arr_41 [i_11] [i_11] = ((/* implicit */long long int) ((((unsigned long long int) -8382916373059731038LL)) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (unsigned char)136))))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_0 [i_12]))))))) || (((_Bool) (unsigned char)119))));
                            arr_42 [i_11] [i_10] [i_9] [i_9] [i_9] [(unsigned short)2] = ((/* implicit */short) (-(((unsigned int) (~(-431539774))))));
                            var_29 &= ((/* implicit */long long int) (-((+(1016280680U)))));
                            arr_43 [i_11] = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10] [i_12]))) & (arr_20 [i_11] [i_12])))) ^ (((/* implicit */unsigned long long int) ((int) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122)))))))));
                        }
                    } 
                } 
                arr_44 [i_9] [i_9] [i_10] = ((/* implicit */long long int) ((int) ((((-5834874186356723724LL) & (-5039922900808037713LL))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_40 [i_9] [i_9] [i_10 + 1]) >= (-328744562846157690LL))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) (+(((((((/* implicit */unsigned int) 1182316838)) % (var_7))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)32535)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_15 = 1; i_15 < 12; i_15 += 3) 
            {
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    {
                        var_31 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) arr_7 [i_13] [i_14] [i_13])))));
                        arr_55 [i_13] [i_14] [i_14] [i_15] [(signed char)7] = ((/* implicit */int) ((long long int) (!((_Bool)1))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                for (unsigned int i_18 = 1; i_18 < 11; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) 3801749883U)));
                            var_33 = (((+(0LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) arr_24 [1] [1] [1] [i_18])))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_13] [i_13] [i_14] [i_14] [i_14])))))));
        }
        arr_63 [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_0)))));
        arr_64 [i_13] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) 3801749864U)) / (18446744073709551615ULL))));
    }
    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 2) 
    {
        arr_67 [i_20] = ((long long int) -5834874186356723709LL);
        arr_68 [i_20] = (!(((/* implicit */_Bool) ((unsigned char) ((9223372036854775807LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_69 [i_20] = ((/* implicit */long long int) ((int) (((-(1622966876U))) << (((((long long int) 8274065636710497206LL)) - (8274065636710497198LL))))));
    }
    /* LoopSeq 3 */
    for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
    {
        var_35 = ((/* implicit */long long int) ((((/* implicit */int) ((6133005257501421064LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2283)))))) != (((int) ((unsigned short) arr_5 [i_21] [i_21])))));
        var_36 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) ((signed char) var_6))))));
        arr_72 [7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        arr_73 [11ULL] [11ULL] = ((((int) ((9223372036854775807LL) != (2296946444152428626LL)))) != (((/* implicit */int) ((unsigned char) ((long long int) arr_22 [i_21] [i_21] [i_21])))));
    }
    for (long long int i_22 = 0; i_22 < 11; i_22 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_23 = 0; i_23 < 11; i_23 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_24 = 4; i_24 < 9; i_24 += 2) 
            {
                for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
                {
                    for (unsigned int i_26 = 0; i_26 < 11; i_26 += 2) 
                    {
                        {
                            arr_85 [i_23] [i_23] [i_24 - 2] [i_24 - 2] [i_26] = ((/* implicit */long long int) ((((unsigned long long int) ((1327060453U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)8505)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_0 [i_22])))))))));
                            var_37 = ((/* implicit */long long int) (!((_Bool)1)));
                            arr_86 [i_23] = ((/* implicit */_Bool) ((unsigned long long int) ((((-5039922900808037699LL) / (7266326506765997779LL))) * (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_22] [i_22]))))))));
        }
        arr_87 [i_22] = ((unsigned char) (unsigned short)11);
    }
    /* vectorizable */
    for (short i_27 = 0; i_27 < 10; i_27 += 2) 
    {
        arr_91 [i_27] = ((/* implicit */unsigned short) ((int) (~(-5039922900808037699LL))));
        arr_92 [i_27] = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) 5039922900808037699LL)));
    }
}
