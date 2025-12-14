/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35313
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
    var_18 += ((/* implicit */short) (+(var_15)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */short) var_17);
        arr_2 [(signed char)8] |= var_5;
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >= (((/* implicit */unsigned long long int) var_15)))))));
        var_21 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_14))))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */signed char) var_17))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_22 += var_3;
        var_23 -= ((/* implicit */short) ((((/* implicit */int) var_2)) >= ((+(((/* implicit */int) var_2))))));
        arr_5 [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (var_7)))));
        arr_6 [i_1] |= (+(var_6));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_24 *= ((var_4) + (var_12));
                var_25 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (var_13)));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_3))));
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_27 ^= ((/* implicit */short) (-((+(var_0)))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((var_7) + (var_12))))));
                    var_29 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_16))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_30 = ((/* implicit */long long int) (~(var_3)));
                    var_31 -= ((/* implicit */short) (+(var_6)));
                }
                for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) var_14)) | ((~(((/* implicit */int) var_2)))))))));
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((6U) & (7U))))));
                }
                for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_34 += ((/* implicit */unsigned long long int) var_1);
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_2)))))));
                        var_36 -= ((/* implicit */unsigned char) ((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_37 *= ((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((var_12) - (179493491424156235ULL)))));
                    }
                    for (short i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        var_38 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) var_15))))) <= (((/* implicit */int) var_10)))))));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (-(var_3))))));
                    }
                    for (short i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_41 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (var_8))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (var_1)))));
                        var_42 *= ((/* implicit */signed char) var_14);
                    }
                }
            }
            for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                var_43 = ((/* implicit */long long int) (-(var_6)));
                var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
                var_45 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_17))));
                var_46 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) - (((/* implicit */int) var_9))));
            }
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (~(var_12))))));
            var_48 += ((/* implicit */short) (~((~(var_6)))));
            arr_33 [i_1] [8LL] &= (+(var_6));
        }
    }
    for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            var_49 += ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) ^ (((var_7) >> (((var_15) + (684981479252453947LL))))));
            arr_38 [(short)6] [(short)6] |= (+(var_3));
        }
        for (short i_14 = 2; i_14 < 12; i_14 += 3) 
        {
            var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) (+(max((((/* implicit */unsigned int) var_14)), (var_1))))))));
            var_51 ^= ((/* implicit */short) min((794749031679179428LL), (((/* implicit */long long int) (short)32767))));
        }
        for (short i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) min(((+(var_3))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (var_5)))))))));
            var_53 *= ((/* implicit */short) (+((~((-(var_13)))))));
        }
        var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), ((+(max((var_12), (((/* implicit */unsigned long long int) var_14)))))))))));
        /* LoopSeq 3 */
        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            var_55 += ((/* implicit */unsigned short) (~(((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (var_1))), ((!(((/* implicit */_Bool) var_15)))))))));
            var_56 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_1))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_17)))))))))) % ((+(var_6)))));
            var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) * (max((((/* implicit */unsigned int) var_9)), (var_1)))))) != ((-(var_6))))))));
        }
        /* vectorizable */
        for (short i_17 = 2; i_17 < 11; i_17 += 2) /* same iter space */
        {
            var_58 += (-(var_13));
            var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) % (((/* implicit */int) var_17)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) <= (var_6)))))))));
            var_60 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_9))))) << (((((var_7) << (((((/* implicit */int) var_16)) - (22183))))) - (14603027344865099767ULL)))));
            var_61 = ((/* implicit */unsigned long long int) max((var_61), (((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        }
        for (short i_18 = 2; i_18 < 11; i_18 += 2) /* same iter space */
        {
            var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (min((var_13), (var_13))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                var_63 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) || (((/* implicit */_Bool) var_12)))))) >= (((var_7) << (((max((((/* implicit */unsigned long long int) var_14)), (var_4))) - (13952316851116166331ULL)))))));
                var_64 *= ((/* implicit */short) ((var_0) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                var_65 -= ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
            }
            var_66 += ((/* implicit */_Bool) (((~(var_3))) - (((/* implicit */unsigned long long int) (~((~(var_0))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_20 = 0; i_20 < 13; i_20 += 3) 
        {
            var_67 = ((/* implicit */unsigned long long int) min((var_67), (max(((+(var_4))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))))));
            var_68 = ((/* implicit */short) max((var_68), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) < ((~(var_4))))))));
        }
    }
    for (unsigned long long int i_21 = 3; i_21 < 11; i_21 += 4) /* same iter space */
    {
        var_69 = ((/* implicit */signed char) min((var_69), (((/* implicit */signed char) min(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) <= (var_7)))))), (((/* implicit */int) (!(((((/* implicit */unsigned long long int) var_1)) == (var_13)))))))))));
        var_70 ^= ((/* implicit */unsigned short) (((+(var_13))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17)))))));
    }
}
