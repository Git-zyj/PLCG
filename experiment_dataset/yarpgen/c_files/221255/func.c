/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221255
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) (+((~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) 4294967295U))))))));
        var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 1U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)35))) : (((((/* implicit */long long int) 1U)) | (arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)250))))) : (((((/* implicit */_Bool) (short)32767)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) * (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (-524476010))))))) ? (((((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)40706)))) / (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)0))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) 14U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (3689315601U)))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(4294967285U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1 - 1])))))))) ? (((((/* implicit */_Bool) (-(889976523)))) ? (((((/* implicit */_Bool) (short)-1134)) ? (((/* implicit */int) (short)-2500)) : (((/* implicit */int) (short)4659)))) : (((((/* implicit */int) arr_4 [i_1 - 1])) & (((/* implicit */int) (short)2491)))))) : ((+(((/* implicit */int) arr_4 [i_1 - 1]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_24 |= ((/* implicit */int) ((arr_2 [i_1 - 1]) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1])))));
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((arr_5 [i_1 - 1] [i_1 - 1]) << (((/* implicit */int) arr_3 [i_1 - 1])))))));
            var_26 = ((/* implicit */signed char) arr_6 [i_1 - 1] [i_2] [i_2]);
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max(((~(arr_5 [i_1 - 1] [i_1 - 1]))), (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1])) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 - 1]))))))));
            var_28 *= (+(max((((6518806188097050344ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)31))))));
        }
        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        {
                            arr_21 [i_7 + 1] [i_6] [i_5] [i_6] [i_1 - 1] = ((/* implicit */signed char) arr_17 [i_1 - 1] [i_5] [i_7 - 1]);
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((unsigned long long int) 18446744073709551601ULL)))));
                            arr_22 [i_6] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((1589917481607812141ULL) >> (((((/* implicit */int) var_7)) - (71)))))) ? ((+(((/* implicit */int) arr_4 [i_4])))) : (((/* implicit */int) ((signed char) 18446744073709551615ULL))))));
                            arr_23 [i_6] [i_4] [i_5] [i_6] [i_7 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)0))))))))));
                            var_30 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])))), (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_6])) ? (arr_14 [i_1 - 1] [i_4] [i_6] [i_7 + 1]) : (((/* implicit */int) arr_7 [i_4] [i_5]))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_12 [i_1 - 1] [i_1 - 1]), (((/* implicit */int) arr_11 [i_6] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */unsigned long long int) 0U)) : (5183423187929075006ULL))))))));
                        }
                    } 
                } 
            } 
            var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2499)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_4] [i_4]))) : (7409298916474413309ULL)))) ? (((unsigned long long int) 16U)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-5488)))))))) ? (max((((/* implicit */long long int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])), (arr_5 [i_4] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (15U)));
        }
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_8 - 1] [i_8 - 1] [i_8 - 1]) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]))) >= (4294967292U)))) : (((((/* implicit */_Bool) arr_26 [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)0)) : (arr_14 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))))) ? (((((/* implicit */_Bool) arr_16 [i_8] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_16 [i_8] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) (signed char)85)))) : (((/* implicit */int) arr_19 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]))));
        var_34 = ((/* implicit */unsigned long long int) arr_12 [i_8 - 1] [i_8 - 1]);
        arr_27 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_9 [i_8 - 1]))) << (((((/* implicit */int) max(((short)-20413), (((/* implicit */short) arr_8 [i_8 - 1] [i_8 - 1]))))) - (32)))));
    }
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? ((-(((/* implicit */int) var_14)))) : (((((/* implicit */int) (unsigned char)152)) | (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) / (var_9)))) ? (((((/* implicit */_Bool) (unsigned char)151)) ? (3306705950U) : (2504232790U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-46)), ((short)17201))))))) : (4294967282U)));
    var_36 += ((/* implicit */signed char) var_5);
}
