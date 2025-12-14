/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30247
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_12 -= ((/* implicit */unsigned char) (short)-28847);
                            arr_12 [11LL] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */short) (+(((int) ((((/* implicit */int) (unsigned short)47654)) <= (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_13 -= ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1065882262)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) arr_8 [i_0]))))) ? (max((((/* implicit */unsigned int) var_8)), (arr_9 [i_0] [i_1] [i_4] [i_5]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)128)))))));
                            var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) > (604554230)))), (((((/* implicit */_Bool) arr_0 [11ULL])) ? (((/* implicit */unsigned long long int) 604554230)) : (0ULL)))))) ? (((long long int) (+(var_11)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
                            arr_19 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 604554210)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0 + 1] [i_1]))))) ? (var_11) : (var_11)));
                            arr_20 [i_0] [i_5] = ((/* implicit */signed char) ((unsigned short) (unsigned char)214));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_13 [(unsigned char)11])) ? (((/* implicit */int) arr_18 [(short)7] [i_0] [2U] [i_1] [(unsigned short)4] [i_1])) : (604554224))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_15 [i_1]))))))) : (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned char)2] [i_0] [i_0] [i_0 + 1])))))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 12; i_6 += 3) 
                {
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((signed char) -604554245))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 16777088)))))) : (arr_21 [(_Bool)1] [i_1] [6ULL])))))));
                            var_17 &= ((/* implicit */short) max((min((((/* implicit */int) ((unsigned short) arr_23 [i_0] [i_1] [12U] [i_7]))), (((((/* implicit */int) var_10)) + (((/* implicit */int) var_1)))))), ((+(((/* implicit */int) arr_2 [i_0] [i_7]))))));
                            arr_25 [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_7])) ? (((2159610472929324025LL) / (((/* implicit */long long int) 604554222)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_1])))))) ? (((((long long int) (_Bool)1)) >> (((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)256)) : (((/* implicit */int) arr_5 [i_7])))) - (205))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0])))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6511611132946241686LL)) ? (12U) : (((/* implicit */unsigned int) 604554222))))) ? (max((((/* implicit */unsigned long long int) arr_10 [6] [i_1] [i_6] [i_7] [(short)1])), (((((/* implicit */_Bool) arr_11 [i_1] [(signed char)4])) ? (0ULL) : (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18316695111372178180ULL)) ? (arr_7 [i_7] [i_6] [(short)11] [(short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (1378000737U) : (arr_9 [(short)0] [(short)9] [i_6] [i_6]))))));
                            var_19 += ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) 7256500511082444349LL)) ? (248989417406676572LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_1] [11U] [i_7]))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (arr_22 [(unsigned short)8] [11LL]))))) < (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_9)))) ? (((long long int) 17258297342545397283ULL)) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0));
}
