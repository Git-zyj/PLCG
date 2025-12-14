/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200915
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-8189777039972522933LL)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_0)) : (8597304204391316297ULL)))))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (9353343117592309291ULL)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (6636953747057121860ULL)));
        var_15 += ((0ULL) ^ (((/* implicit */unsigned long long int) 0)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) (+(11ULL)));
        var_17 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (short)-31604)) % (((/* implicit */int) (unsigned short)65535)))));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (arr_4 [i_2] [(unsigned short)14])));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((min((((arr_4 [i_2] [(unsigned short)4]) ? (((/* implicit */unsigned long long int) var_6)) : (arr_13 [i_2] [i_3] [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))) == (0ULL)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_8) || (((/* implicit */_Bool) -661510545)))))))))))));
                }
            } 
        } 
        arr_14 [i_2] [(unsigned short)5] = ((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_2]));
        var_20 += ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (661510541) : (((/* implicit */int) (unsigned short)785))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (63LL))));
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_9 [i_2]), (((/* implicit */long long int) arr_11 [i_2] [i_2]))))) ? (((/* implicit */int) ((min((((/* implicit */int) arr_11 [i_2] [i_2])), (arr_5 [i_2] [i_2]))) == (((int) arr_5 [(signed char)19] [i_2]))))) : (((((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [2])), (arr_11 [i_2] [i_2])))) % (((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (arr_7 [i_2]) : (((/* implicit */int) arr_12 [6LL]))))))));
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((int) arr_10 [i_5])) << ((((~(5871034913040697209ULL))) - (12575709160668854404ULL)))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_5))));
                    var_24 = ((/* implicit */long long int) arr_15 [i_5]);
                    arr_21 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */int) ((2206476933068117428ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6]))))))));
                }
            } 
        } 
        arr_22 [i_5] = ((/* implicit */short) ((arr_18 [i_5] [i_5]) / (((/* implicit */long long int) ((arr_17 [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned char)9]))))))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) arr_20 [i_5] [i_5] [i_5] [i_5]);
        var_25 *= (((+(min((arr_18 [i_5] [i_5]), (((/* implicit */long long int) arr_8 [i_5])))))) % (arr_9 [i_5]));
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
        {
            var_26 += ((/* implicit */signed char) (((-(min((var_1), (arr_9 [i_5]))))) / (arr_9 [i_5])));
            arr_27 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */int) ((unsigned short) 3930707664U))) : ((+(((/* implicit */int) ((signed char) var_0)))))));
            var_27 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(arr_12 [i_8]))))));
            arr_28 [i_5] [i_8] [i_8] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_25 [i_5])) * ((-(((/* implicit */int) (_Bool)1))))))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (arr_16 [i_5])));
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
        {
            arr_31 [i_5] [i_9] [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */short) min((arr_12 [i_9]), (arr_12 [i_9])))), (((short) ((signed char) (unsigned short)33646)))));
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) ((int) 12493637945231397060ULL));
                arr_35 [i_9] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2206476933068117428ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_10] [i_5]))) : (((unsigned long long int) arr_25 [i_9])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_10])))))));
                var_30 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (signed char)-127)) + (((/* implicit */int) (short)8359)))) == (((((/* implicit */_Bool) arr_25 [i_5])) ? (((/* implicit */int) arr_26 [(_Bool)1] [i_9] [i_10])) : (((/* implicit */int) (unsigned char)255)))))))) == (((unsigned int) ((((/* implicit */int) arr_24 [i_5])) >= (((/* implicit */int) arr_4 [i_5] [i_5])))))));
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_38 [i_5] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_30 [i_5]);
                    arr_39 [i_5] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) arr_29 [i_5] [i_9]);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((arr_40 [i_9]) - (3761336296529918578ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7501624577528843038ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)8337)))))))), (min((((/* implicit */unsigned long long int) arr_15 [i_5])), (18446744073709551600ULL))))))));
                    var_32 = ((/* implicit */unsigned char) max((0ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)64750), (var_2)))))))));
                    arr_42 [i_10] [i_9] [i_10] [i_9] [i_9] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10] [i_10]))) / (var_1))))) ? (((/* implicit */unsigned int) ((int) arr_7 [i_5]))) : ((-(arr_17 [i_9])))));
                }
                var_33 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_10])) > (((unsigned long long int) (signed char)16))));
            }
            for (unsigned char i_13 = 3; i_13 < 11; i_13 += 2) 
            {
                var_34 = arr_34 [i_13 + 3] [i_13 + 3] [(unsigned short)12];
                arr_46 [i_5] [i_9] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_7)))) ? ((-(arr_34 [i_13 + 3] [i_13 + 2] [(signed char)4]))) : (((/* implicit */unsigned long long int) (+(var_9))))));
            }
            arr_47 [i_9] [i_5] = ((/* implicit */short) var_7);
        }
    }
    var_35 = ((/* implicit */int) -5504828787846544277LL);
    var_36 ^= ((/* implicit */signed char) min((min((((((/* implicit */long long int) var_7)) / (var_1))), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (unsigned short)64764))));
}
