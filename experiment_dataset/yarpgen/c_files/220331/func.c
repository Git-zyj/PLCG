/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220331
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
    var_19 += ((/* implicit */long long int) min((((((/* implicit */_Bool) min((1696498381761616493ULL), (16750245691947935123ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_16)) ? (1696498381761616462ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */short) var_13)), (var_7))), (((/* implicit */short) var_9)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) * (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_21 = arr_3 [i_0] [i_0] [i_1];
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) var_15);
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)61871))))))) ? (((/* implicit */long long int) 4282192624U)) : (var_11)));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [10LL] [i_2]))) | (1696498381761616476ULL))) : (((((/* implicit */_Bool) arr_6 [(unsigned short)1] [(unsigned short)1] [i_2] [i_3 - 3] [i_3 - 2])) ? (((/* implicit */unsigned long long int) 12774671U)) : (11621173636426873457ULL))))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) 12774647U))), (((((/* implicit */_Bool) arr_4 [i_2] [i_1 - 1] [i_3 + 1])) ? (var_10) : (var_15)))))))))));
                        arr_9 [i_0] [i_1] [12ULL] [i_0] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0 - 1] [i_1 + 3])))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned short)10] [i_0 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0 - 1] [i_1 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [10LL] [i_0 - 1] [i_1 - 1]))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            arr_14 [(signed char)0] [i_0] = ((/* implicit */long long int) 2053960312);
            var_24 ^= ((/* implicit */unsigned char) (+(2028659977468323212ULL)));
            var_25 += ((((/* implicit */_Bool) ((signed char) arr_0 [12ULL]))) ? (((long long int) (signed char)53)) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [(_Bool)0]))))));
        }
        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [14ULL] [6ULL] [i_0])) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [(short)10] [(unsigned short)0] [i_0] [(unsigned char)8] [(_Bool)1])) : (((/* implicit */int) (signed char)77)))))))) ? (((((/* implicit */_Bool) (+(16750245691947935123ULL)))) ? (((/* implicit */unsigned long long int) (~(7785927294704319995LL)))) : ((-(9152326647911606954ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1696498381761616461ULL)))) ? (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])) : (min((var_10), (((/* implicit */long long int) var_5)))))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_27 |= ((/* implicit */signed char) (~((~(((/* implicit */int) ((_Bool) (unsigned short)61850)))))));
                        arr_22 [i_0] [i_5] [(_Bool)1] [6ULL] [i_7] [i_6] = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)198))))));
                        arr_23 [i_0 - 1] [i_7] [i_0] [i_0 - 1] [i_0] |= ((/* implicit */unsigned long long int) (unsigned short)13);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                {
                    var_28 *= ((/* implicit */unsigned long long int) min(((~(var_10))), (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            {
                                arr_34 [i_0] [i_0] [i_0] [i_9] [i_0] [i_11] = ((/* implicit */_Bool) arr_29 [6] [i_10 - 1] [i_9] [3LL]);
                                var_29 += ((/* implicit */long long int) ((unsigned int) (!((!(((/* implicit */_Bool) -2147483641)))))));
                                var_30 -= ((/* implicit */long long int) ((((unsigned int) arr_6 [i_10] [i_10] [i_10] [10ULL] [i_10 - 1])) << (min((arr_31 [i_10] [12ULL] [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1]), (((/* implicit */unsigned int) var_16))))));
                                arr_35 [i_0] [i_8] [i_8] [i_10 - 1] [i_11] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 15516383571314382399ULL))));
                                var_31 ^= ((/* implicit */long long int) 4294967295U);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        var_32 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)110))));
        arr_38 [i_12] [i_12] = ((/* implicit */signed char) ((arr_37 [i_12]) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(var_8))))))));
        arr_39 [i_12] = ((/* implicit */long long int) arr_37 [i_12]);
    }
    var_33 += ((/* implicit */unsigned char) var_2);
}
