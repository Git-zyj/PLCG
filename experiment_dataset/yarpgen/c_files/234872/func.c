/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234872
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 *= ((20) <= ((((_Bool)1) ? (((/* implicit */int) (unsigned char)68)) : (((((/* implicit */_Bool) (unsigned short)59497)) ? (((/* implicit */int) (_Bool)1)) : (20))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */long long int) ((1404659428) & (((/* implicit */int) (short)-32753))))) / (((((/* implicit */long long int) min((((/* implicit */int) (signed char)18)), (1610387350)))) ^ (9223372036854775800LL))));
                                arr_15 [i_0] [i_4] [i_2 - 1] [i_3 - 2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)71)), ((unsigned short)8111)))) | (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
                                arr_16 [i_4] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) * (1048575ULL))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-40)) % (-736955339))) * (((/* implicit */int) ((((/* implicit */int) (signed char)5)) < (((/* implicit */int) (_Bool)1))))))))));
                                arr_17 [i_0] [i_4] [i_4] [i_4] [i_4] [i_1] [i_4] = ((/* implicit */_Bool) max((18155400709051908866ULL), (((/* implicit */unsigned long long int) ((((-1610387351) <= (((/* implicit */int) (_Bool)1)))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (736955337))) : (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (short)4095)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967292U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))))) ? (((max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)174)) ^ (((/* implicit */int) (signed char)24))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)65517)) <= (1020))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-104))))) : (((((/* implicit */_Bool) 10973761014042717641ULL)) ? (((/* implicit */unsigned long long int) -1)) : (7472983059666833985ULL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((((/* implicit */_Bool) 8801694429874598266ULL)) ? (((/* implicit */int) (_Bool)1)) : (-736955361))) < (var_10))) ? (((/* implicit */unsigned long long int) var_4)) : (min((((9823889063342484207ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65533)) * (-1014)));
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 18; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_23 *= ((/* implicit */short) ((15505417105198743673ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 15505417105198743701ULL))))))));
                        /* LoopSeq 4 */
                        for (signed char i_9 = 2; i_9 < 18; i_9 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) << (((-4059429595438733710LL) + (4059429595438733714LL))))) <= (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)62623)))))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)-7)) % (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (short)26328)))))));
                        }
                        for (signed char i_10 = 2; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))));
                            var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) || (((/* implicit */_Bool) 140737488355320ULL))));
                        }
                        for (short i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) ((10705197890985095394ULL) % (18446744073709551598ULL)));
                            var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (short)-26007))));
                            arr_38 [11ULL] [i_6 - 3] [i_6 - 2] [i_6] [i_6] [i_8] [(unsigned short)1] = ((((/* implicit */int) ((unsigned char) (unsigned short)2550))) / ((-2147483647 - 1)));
                            arr_39 [i_7] [i_7] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)62624)) - (((/* implicit */int) (unsigned short)42477))))));
                        }
                        for (short i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                        {
                            arr_42 [i_5] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) -1611631928)) ? (((/* implicit */int) (unsigned short)57939)) : (((/* implicit */int) (short)-10974)))) <= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-7)) && (((/* implicit */_Bool) (short)-27463)))))));
                            arr_43 [i_8] [(short)11] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((-429621840) ^ (((/* implicit */int) (unsigned short)65535))))) ^ (8622855010367067433ULL)));
                            var_30 = ((/* implicit */long long int) ((((9823889063342484203ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62603))))) != (2096128ULL)));
                        }
                        arr_44 [i_8] [i_6] [i_7] [i_8] = ((((/* implicit */int) ((unsigned short) -1680758558))) <= (((1186902841) * (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) 
    {
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */int) (short)1)) < (((((/* implicit */_Bool) max((((/* implicit */unsigned int) -2147483640)), (209791914U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((unsigned short)64036), (((/* implicit */unsigned short) (short)-15296))))))))))));
        var_32 = ((((((((/* implicit */_Bool) 1043856541)) ? (1043856527) : (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) ((_Bool) 2096132ULL))))) % (((/* implicit */int) ((unsigned char) (unsigned short)65533))));
    }
}
