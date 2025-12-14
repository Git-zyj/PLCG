/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196592
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 1150799508))));
                        arr_12 [i_2] [i_1] [i_1] = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-6149918151531563396LL)))));
                        arr_13 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (short)-29896);
                        arr_14 [i_3] [i_3] [i_2] [(signed char)8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)23552))));
                        var_16 += ((/* implicit */unsigned char) (-(-4330080824398000188LL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) (signed char)-68);
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) (short)29887)) > (((/* implicit */int) (unsigned short)57616)))))));
            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)51))));
            var_20 = ((/* implicit */signed char) (short)-29894);
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            arr_20 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)20598))));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_22 -= ((/* implicit */unsigned long long int) 523561996);
            /* LoopSeq 1 */
            for (long long int i_7 = 4; i_7 < 9; i_7 += 2) 
            {
                arr_25 [i_7] [i_7] [9] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) > (820430072834562335LL)));
                arr_26 [i_0] [i_0] [i_7] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43029))) & (14084720784817141724ULL)));
                arr_27 [i_6] [i_6] [i_7] [6U] = ((/* implicit */signed char) ((11ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) 6149918151531563396LL))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (short)29887))));
            }
            arr_28 [i_0] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)13640))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (+(4362023288892409879ULL))))));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            arr_31 [(signed char)9] [5] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)91)) ^ (((/* implicit */int) (short)-6338)))) | ((~(524287)))));
            var_26 -= ((/* implicit */unsigned short) ((-6149918151531563416LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-43)))));
            var_27 = ((/* implicit */_Bool) min((var_27), ((_Bool)1)));
            arr_32 [i_0] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
    {
        arr_36 [6] = ((/* implicit */signed char) (unsigned short)45419);
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 3) 
            {
                {
                    arr_41 [19] [(signed char)1] [i_11] |= (-(((/* implicit */int) (unsigned short)38880)));
                    arr_42 [i_11] [(unsigned short)1] = ((/* implicit */unsigned short) 1564571693);
                    var_28 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)14733))));
                }
            } 
        } 
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) -4))));
    }
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
    {
        arr_45 [i_12] [i_12] = ((/* implicit */signed char) (short)29887);
        arr_46 [6U] = (_Bool)1;
    }
    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
    {
        arr_50 [i_13] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 8191LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63565))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
        {
            arr_54 [i_14] [i_14] [i_14] = ((/* implicit */short) (-(-565668361063510716LL)));
            arr_55 [i_14] [i_14] [i_14] |= ((/* implicit */short) ((1551669419396649355ULL) / (((/* implicit */unsigned long long int) 1017680729U))));
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 8571325594487886546LL))))))))));
        }
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
                        {
                            arr_66 [i_13] [i_15] [i_16] [i_17] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -6746920302876863939LL))));
                            arr_67 [i_13] [i_15] [i_18] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (-2147483647 - 1)))))));
                        }
                        for (short i_19 = 3; i_19 < 21; i_19 += 2) 
                        {
                            var_32 = (!((!(((/* implicit */_Bool) 18446744073709551615ULL)))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) 4362023288892409891ULL))));
                        }
                        for (unsigned int i_20 = 0; i_20 < 23; i_20 += 1) 
                        {
                            var_34 ^= ((/* implicit */unsigned int) 9223372036854775795LL);
                            arr_72 [i_15] = ((/* implicit */signed char) (unsigned short)46023);
                            var_35 = ((/* implicit */int) max((var_35), ((+(((/* implicit */int) (_Bool)0))))));
                            arr_73 [i_15] [i_15] [i_15] [13LL] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) / ((+(565659561)))));
                            arr_74 [i_13] [i_15] [i_16] [i_17] [i_13] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)9899))));
                        }
                        arr_75 [i_13] [i_15] [i_16] [3] [i_15] = ((/* implicit */unsigned short) (+(763741303787784365LL)));
                    }
                } 
            } 
            var_36 = (!(((/* implicit */_Bool) (short)-9899)));
            arr_76 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (signed char)-5);
        }
        arr_77 [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 6167356273610007550LL))));
    }
    var_37 = ((/* implicit */unsigned int) (unsigned char)255);
}
