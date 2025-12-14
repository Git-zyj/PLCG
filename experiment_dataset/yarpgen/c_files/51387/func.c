/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51387
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
    var_12 = ((signed char) max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) var_1)) : (var_7))), (min((((/* implicit */long long int) (short)11512)), (2080768LL)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */unsigned long long int) arr_0 [i_1]);
                var_14 = ((/* implicit */short) max(((-(((/* implicit */int) (short)2531)))), (((((/* implicit */_Bool) min((arr_1 [(short)18] [(short)18]), ((signed char)41)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)112)))) : (((/* implicit */int) max(((short)32767), (((/* implicit */short) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 8918006163399312956LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) (short)-7630)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)56256)))) + (17063))))) * (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11512)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0)))))))));
    /* LoopSeq 4 */
    for (long long int i_2 = 4; i_2 < 24; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (short)-11512))))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)59))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 3) /* same iter space */
        {
            var_17 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_2]))));
            arr_10 [i_3] [(short)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_3 - 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_2])))), (((/* implicit */int) (signed char)-50))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3])) ? (((/* implicit */int) min(((unsigned short)47495), (arr_4 [i_2 - 1])))) : (((/* implicit */int) arr_9 [i_2])))))));
        }
        for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                for (short i_6 = 3; i_6 < 23; i_6 += 4) 
                {
                    {
                        arr_17 [i_5] [i_4] [i_4] [i_4] [i_6 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 2712665873933698082ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (12981090912071171382ULL) : (10647196261246552521ULL)))) ? (max((var_3), (((/* implicit */unsigned int) arr_8 [i_4])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)247)))))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 2; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            var_18 &= ((/* implicit */_Bool) 4809542252284200294ULL);
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_7] [i_7])) ? ((+(((/* implicit */int) ((short) arr_9 [i_5]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)9)) & (((/* implicit */int) arr_5 [i_6 - 1] [i_5]))))))));
                        }
                        for (short i_8 = 2; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            arr_23 [i_2 - 2] [i_5] [i_5] [i_5] [i_8] [i_8] = ((/* implicit */unsigned char) (short)11512);
                            var_20 = ((/* implicit */short) arr_15 [i_6] [i_4] [(_Bool)1]);
                        }
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) arr_9 [i_4])) ? (10922034049551073217ULL) : (((/* implicit */unsigned long long int) arr_22 [(short)20] [i_4] [(short)20] [7ULL] [i_4 - 2] [8LL] [i_4])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 2])))))));
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)11511))));
            var_23 = ((/* implicit */unsigned short) min((((((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_2 - 3])))) + ((+(((/* implicit */int) arr_7 [i_2])))))), ((+(((/* implicit */int) (unsigned short)0))))));
        }
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_22 [i_2] [i_2] [i_2 - 1] [(_Bool)1] [(_Bool)1] [i_2] [23U]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */int) arr_4 [i_2 + 1])) : (((/* implicit */int) (short)-11512))));
    }
    for (signed char i_9 = 1; i_9 < 18; i_9 += 3) 
    {
        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9 + 2]))) : (arr_13 [i_9 + 1] [i_9 - 1] [i_9]))), (((unsigned int) arr_18 [i_9] [i_9]))));
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)88))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((arr_22 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9]) % (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (unsigned char)165)) <= (((/* implicit */int) var_9))))), (max(((short)-11513), (((/* implicit */short) (unsigned char)91))))))))));
    }
    for (unsigned long long int i_10 = 4; i_10 < 9; i_10 += 2) 
    {
        var_28 = ((/* implicit */short) arr_2 [i_10]);
        arr_29 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)11491)) * (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)241)) * (((/* implicit */int) ((unsigned char) (unsigned char)91)))))) : (-6252906585249086505LL)));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_34 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_11]))))) ? (((/* implicit */int) ((short) max((var_5), (((/* implicit */short) (signed char)40)))))) : (((/* implicit */int) ((short) max((((/* implicit */unsigned int) (signed char)74)), (var_11)))))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 19; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((unsigned long long int) arr_19 [(unsigned char)9] [i_11] [i_12] [i_12] [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (arr_32 [i_11] [i_12 + 2])))) - (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13] [i_13])))))))));
                    var_30 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)5))));
                    var_31 ^= ((/* implicit */_Bool) 4294967295U);
                    arr_41 [i_13] = ((/* implicit */unsigned char) arr_0 [i_12 - 1]);
                }
            } 
        } 
    }
    var_32 = (!((!(((/* implicit */_Bool) ((short) var_8))))));
}
