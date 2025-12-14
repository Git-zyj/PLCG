/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198184
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_12 |= ((/* implicit */int) max((((arr_1 [i_0]) << (((((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */long long int) -1733361777)) : (3826592144302183335LL))) + (1733361818LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(3826592144302183351LL)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11)))))));
        var_13 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) -3826592144302183322LL)) ? (-8144167630916155607LL) : (-3826592144302183337LL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) -3826592144302183336LL);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((short) (short)-5581));
                var_15 += ((((/* implicit */_Bool) (((_Bool)0) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7380))) : (((((/* implicit */_Bool) (short)5581)) ? (-271228389179756757LL) : (3826592144302183335LL))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_16 = ((-3826592144302183351LL) <= (-8144167630916155607LL));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) 70368744177664LL)))))));
                            arr_17 [i_0] [i_5] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
                            var_18 -= ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [i_4 + 2] [i_1] [i_1 - 1] [i_1])) < (((/* implicit */int) arr_11 [i_4] [i_4 + 2] [i_4] [i_1 - 1] [i_1]))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 18117908339242481259ULL)) ? (((/* implicit */unsigned long long int) 5530224208783070681LL)) : (((((/* implicit */_Bool) 4069076246U)) ? (4257665734475626472ULL) : (1450903718899471095ULL)))));
            }
            var_19 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1884259829)) : (arr_1 [i_1]))));
            var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) == (8144167630916155606LL))) ? ((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_1])))) : (((/* implicit */int) (short)-6128))));
            var_21 *= ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_7))))));
        }
        for (long long int i_6 = 2; i_6 < 24; i_6 += 4) 
        {
            arr_22 [i_0] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6 - 1] [i_6])) ? (((/* implicit */int) var_7)) : (arr_3 [i_6 + 1] [i_6])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((-1884259825) + (2147483647))) << (((/* implicit */int) (_Bool)1))))) : (min((var_3), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (((/* implicit */int) min((max((((/* implicit */short) arr_10 [i_0] [i_6] [i_0] [i_6])), (var_11))), (((/* implicit */short) (!(((/* implicit */_Bool) 2139889717)))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_6 - 2] [i_6] [i_6] [i_6] [i_6 - 2])) : (((/* implicit */int) arr_11 [i_6 - 2] [i_6] [i_6] [i_6] [i_6 - 1]))))));
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_6 [i_0])) == (((/* implicit */int) arr_6 [i_0])))));
        }
    }
    var_23 ^= min((((/* implicit */short) var_7)), (var_11));
}
