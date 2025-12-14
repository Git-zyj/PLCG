/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25536
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28813)) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) 8559019677497410705ULL)) ? (9887724396212140898ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))))) : ((-(max((8559019677497410723ULL), (4720183719031476649ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_19 = ((/* implicit */_Bool) 1313571689U);
            var_20 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 9887724396212140910ULL)) ? ((-(9887724396212140913ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (var_7))))))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_3 [i_0] [i_1 + 3]))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_12), (((/* implicit */unsigned int) (short)-13988))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : ((+((-9223372036854775807LL - 1LL))))));
                            arr_12 [i_3] [15LL] [i_2] [i_3] [i_3] [15LL] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (min(((~(5380150435331270283LL))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 638418421)) : (-5380150435331270277LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12876))))))));
                            arr_13 [i_4] [i_4] [i_3] [i_0] [(unsigned char)8] [i_0] = ((/* implicit */unsigned long long int) max((min((arr_10 [i_3 - 1] [i_3 - 1]), (((/* implicit */int) min((var_5), (((/* implicit */short) (signed char)82))))))), (var_6)));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            var_23 |= ((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((((/* implicit */int) max(((unsigned char)30), ((unsigned char)163)))) << (((((/* implicit */int) arr_5 [i_0 + 3] [i_5 + 1])) + (1071)))))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 4; i_6 < 16; i_6 += 4) 
            {
                for (signed char i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((max((8559019677497410712ULL), (17388858904712418748ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_5 - 1] [i_6])))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_13))))))) : ((~(max((var_7), (arr_9 [i_0] [i_5 - 1] [i_8] [i_7] [i_8] [i_6 - 1]))))))))));
                            var_25 = arr_7 [i_5] [i_5];
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((5766954538545392818LL) - (((/* implicit */long long int) ((/* implicit */int) ((var_1) < (((/* implicit */long long int) (~(arr_3 [i_8] [i_6])))))))))))));
                            var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_6)) : (var_16)))))), (var_0)));
                            var_28 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) arr_20 [i_5] [i_5] [i_5 - 1] [i_5])), ((+(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_9 = 3; i_9 < 16; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) ^ (1917509598U)));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_1))));
                            arr_36 [i_0] [i_9] [i_9] [i_9] [i_12] [i_12] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)221))));
                            arr_37 [i_11] [i_9] [i_11] [i_11] [i_12] [i_11] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10] [i_9]))));
                            var_31 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_27 [i_12] [i_12] [i_12])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4288210703442389652ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10]))) : (8559019677497410717ULL))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 17; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    for (unsigned int i_15 = 2; i_15 < 17; i_15 += 3) 
                    {
                        {
                            var_32 = (~(-4489185220508124938LL));
                            var_33 = ((/* implicit */int) max((var_33), ((~(((/* implicit */int) (unsigned char)35))))));
                            arr_46 [i_0] [i_0] [i_9] [i_13] [4U] [i_15] [i_9] = ((/* implicit */short) -4736619185918000851LL);
                            arr_47 [i_15] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_20 [i_0 + 3] [i_0 + 3] [i_13] [i_9])) : (((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 3] [i_15 - 2] [i_9]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_16 = 2; i_16 < 14; i_16 += 2) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_55 [i_0] [16LL] [i_9] [16LL] [i_0] = ((/* implicit */long long int) var_12);
                            arr_56 [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_51 [i_0] [(short)7] [i_16] [i_16] [i_17] [(_Bool)1])) ? (((/* implicit */long long int) 2377457698U)) : (5380150435331270283LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_6) : (((/* implicit */int) (signed char)-4)))))));
                            var_34 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)18)) ? (1108307720798208ULL) : (((/* implicit */unsigned long long int) -67108864))))));
                            var_35 = ((/* implicit */unsigned char) -5286683179399178184LL);
                            arr_57 [i_9] = ((/* implicit */unsigned int) 12536254554121476333ULL);
                        }
                    } 
                } 
            } 
        }
        var_36 = ((((/* implicit */_Bool) (+((~(6592606132537249799LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -638418421)))))))) : (var_12));
        var_37 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-117)), (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [6ULL] [i_0] [6ULL] [i_0] [(short)14] [i_0])))))));
    }
    var_38 += ((/* implicit */long long int) ((816609113U) ^ ((-((~(0U)))))));
    var_39 = max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)44))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))) : (max((16597528955219204198ULL), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) var_2)));
}
