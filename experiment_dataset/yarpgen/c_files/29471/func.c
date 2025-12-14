/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29471
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
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_1), (((/* implicit */long long int) var_5)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (var_0)))))))) ? (((((/* implicit */_Bool) ((14824427973197880302ULL) - (3622316100511671307ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)138)) << (((((/* implicit */int) var_13)) - (147)))))))))));
    var_18 -= ((/* implicit */unsigned char) (-(max((((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)24)) << (((((/* implicit */int) var_2)) - (81))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) + (var_0)));
                                var_20 += ((((/* implicit */long long int) ((/* implicit */int) var_16))) % (((((/* implicit */_Bool) ((long long int) var_7))) ? (arr_9 [i_4] [i_3] [21ULL] [i_0]) : (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (var_8))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) arr_12 [i_5] [i_1] [i_1] [i_1] [i_0])));
                        var_22 = ((/* implicit */unsigned long long int) ((((long long int) (signed char)32)) - (((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))))), (((/* implicit */unsigned int) (signed char)-11)))))));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_24 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-2))))), (max((1912660969671628468ULL), ((-(14824427973197880303ULL)))))));
                        var_25 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (var_15))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_26 += ((/* implicit */signed char) ((unsigned long long int) (unsigned char)31));
                                var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 4145547887U)) ? (((((/* implicit */unsigned long long int) var_5)) + ((~(var_15))))) : (((((/* implicit */_Bool) max(((unsigned char)195), ((unsigned char)105)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 8674545630197816569ULL)))) : (((((/* implicit */_Bool) (unsigned char)26)) ? (arr_8 [i_8] [i_1] [i_2] [i_1] [(signed char)10]) : (14824427973197880303ULL)))))));
                                arr_21 [1LL] = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) <= (((((/* implicit */_Bool) var_9)) ? (arr_0 [16LL] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))) : (((unsigned long long int) (signed char)-125)));
                            }
                        } 
                    } 
                    var_28 -= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (~(4297961590854339531LL))))))));
                }
            } 
        } 
    } 
}
