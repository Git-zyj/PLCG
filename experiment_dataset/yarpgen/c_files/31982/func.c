/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31982
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) >= (var_5))))) : ((~(arr_2 [i_0])))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned char) min((((long long int) arr_0 [i_1])), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_3 [10U])), ((unsigned short)15338)))))));
            arr_7 [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) (-(((((/* implicit */int) ((_Bool) arr_2 [i_0]))) + (((/* implicit */int) min((arr_9 [i_0] [i_2]), (((/* implicit */signed char) arr_1 [i_0])))))))));
            var_17 -= ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) -3LL))))))) ^ (((/* implicit */int) min(((unsigned char)243), (((/* implicit */unsigned char) (signed char)117)))))));
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)12)) * ((-(((/* implicit */int) (unsigned char)12))))));
        }
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
            {
                arr_17 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) min((max(((unsigned char)15), (((/* implicit */unsigned char) (signed char)-11)))), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)8883)) && (((/* implicit */_Bool) var_7))))))));
                arr_18 [(unsigned short)6] [i_3] [i_3] [i_0] = ((/* implicit */int) max(((((!(((/* implicit */_Bool) arr_11 [6] [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3]))) : (arr_8 [i_0] [i_3]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_3] [i_3])))));
            }
            for (int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
            {
                arr_21 [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-13677)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))));
                var_18 += ((/* implicit */long long int) ((signed char) var_7));
                arr_22 [9ULL] [i_3] [9ULL] [i_5] = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) (short)-822)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) : (var_8))))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_12 [i_0] [i_3] [i_5])))))));
            }
            var_19 |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_11 [i_0] [i_3] [(short)3]) : (arr_11 [i_0] [i_3] [i_3]))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_3] [i_3]))) + (((arr_2 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) + (min((arr_13 [(signed char)0] [i_3] [8ULL] [(signed char)0]), (((/* implicit */long long int) ((var_5) - (((/* implicit */unsigned int) var_14)))))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))) : (((((((/* implicit */int) arr_16 [i_0] [10LL] [i_3])) + (2147483647))) << (((((var_8) + (4331483579496249196LL))) - (17LL))))))) << (((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)32213)) ? (((/* implicit */int) (short)-4531)) : (((/* implicit */int) (_Bool)0)))) >= ((-(((/* implicit */int) (unsigned short)32201))))))) - (1))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            arr_25 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)1602)))))));
            arr_26 [i_6] = ((/* implicit */_Bool) (+(((((3688322130U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))) << (((((/* implicit */int) arr_0 [i_0])) - (49500)))))));
            /* LoopSeq 4 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                arr_29 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_0] [i_0] [i_6] [9U])), (((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) (unsigned short)35805)) : (((/* implicit */int) (unsigned short)8192))))))) ? (((((/* implicit */int) max(((unsigned char)173), (((/* implicit */unsigned char) arr_9 [i_0] [i_0]))))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [i_7]))) >= (541256710774103762LL)))))) : (((/* implicit */int) min(((short)-1601), (((/* implicit */short) (unsigned char)252)))))));
                arr_30 [i_0] [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_19 [i_0] [i_6] [i_6] [i_7]), (arr_19 [i_7] [i_6] [i_0] [i_0]))))));
                var_22 = ((/* implicit */short) (~((-(((/* implicit */int) (short)1602))))));
            }
            for (unsigned char i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                arr_34 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (((_Bool)0) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (var_10)))) : (((/* implicit */int) ((_Bool) 9062256727099442452LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_14) & (((/* implicit */int) var_11))))))))));
                arr_35 [i_6] [i_6] [i_8 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8 - 1] [i_6] [i_8 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_8 + 2] [i_6] [0LL]))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((arr_33 [i_8] [i_6] [i_6] [i_0]) && (arr_1 [i_0]))))))));
                arr_36 [9LL] [9LL] [9LL] [i_6] = ((/* implicit */unsigned int) ((((unsigned long long int) ((var_14) ^ (((/* implicit */int) arr_27 [i_8]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (var_14))))))));
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_16 [4LL] [(short)0] [i_9])) + (((/* implicit */int) arr_5 [i_6] [(unsigned char)3])))))));
                arr_39 [7U] [7U] [i_9] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) ((unsigned char) arr_2 [i_9])))));
                arr_40 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) (signed char)108)));
            }
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                arr_43 [i_6] [i_6] [i_0] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1243503363)) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) var_6)))))));
                arr_44 [i_10] [i_6] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_41 [i_0] [i_6] [i_10]))));
            }
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                            arr_52 [i_0] [i_6] [i_11] [i_6] [(unsigned char)1] [i_6] = var_0;
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
    {
        arr_56 [(_Bool)1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_14] [i_14])) ? (((/* implicit */int) arr_55 [i_14])) : (((/* implicit */int) arr_55 [i_14]))));
        var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_14])) << (((var_5) - (537025081U))))))));
        var_27 *= ((/* implicit */unsigned long long int) (unsigned char)31);
    }
    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
    {
        arr_59 [i_15] = ((((((/* implicit */_Bool) 1614514438U)) || (((/* implicit */_Bool) (-2147483647 - 1))))) || (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_15])) ? (((/* implicit */int) arr_54 [i_15] [i_15])) : (((/* implicit */int) var_11))))))));
        arr_60 [i_15] = ((/* implicit */unsigned char) min(((~(8775010172391159835LL))), (((/* implicit */long long int) ((unsigned char) ((var_8) >= (var_1)))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (var_13))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_13)))))))) : (max((((var_1) + (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) 2834574373U))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_29 = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -9223372036854775804LL)));
        arr_65 [i_16] [i_16] = ((/* implicit */unsigned char) (!(((arr_57 [i_16]) || (arr_55 [i_16])))));
        var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_55 [i_16]))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        arr_69 [i_17] = ((/* implicit */short) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_58 [i_17])))))) ^ (((/* implicit */int) max((((/* implicit */short) arr_55 [i_17])), (((short) (signed char)-107)))))));
        var_31 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_17])))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (-2147483647 - 1))))));
        var_33 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)249))))));
        var_34 += ((/* implicit */short) (~((+(var_7)))));
        var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_68 [(short)0] [i_18]))));
    }
}
