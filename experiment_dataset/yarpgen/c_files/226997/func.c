/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226997
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_12 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_3] [i_1 - 2])) ? (((/* implicit */int) arr_6 [i_4] [i_4 - 1] [i_4] [i_1 - 2])) : (((/* implicit */int) var_7)))))));
                                var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4])))) ? (((/* implicit */int) min((min((var_11), (((/* implicit */short) (signed char)-81)))), ((short)2276)))) : (((/* implicit */int) (!(((((/* implicit */int) (short)27359)) <= (((/* implicit */int) (short)-12494)))))))));
                                var_14 = ((/* implicit */unsigned char) (signed char)-83);
                            }
                        } 
                    } 
                    arr_10 [(_Bool)1] = ((/* implicit */short) (+((~(((/* implicit */int) ((short) (signed char)-97)))))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), ((((-(((/* implicit */int) (unsigned char)220)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 14742128896392476778ULL)))))))));
    var_16 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 6946636179939714588ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) : (3704615177317074838ULL))));
    var_17 = var_11;
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (unsigned char i_6 = 2; i_6 < 21; i_6 += 2) 
        {
            for (unsigned char i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                {
                    arr_19 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((int) ((unsigned short) (unsigned char)146)));
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4850930950034239752ULL)) ? (((((/* implicit */_Bool) ((arr_12 [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (11259176281407118442ULL) : (((((/* implicit */_Bool) 3704615177317074838ULL)) ? (11177322420910823199ULL) : (arr_13 [i_5] [i_6] [(short)22]))))) : (((/* implicit */unsigned long long int) ((((7299722500331503619LL) != (((/* implicit */long long int) 887218686U)))) ? (((/* implicit */unsigned int) (~(arr_11 [(signed char)23] [i_6])))) : (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned int) var_8)) : (2185578958U))))))));
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)32706))))) || (((/* implicit */_Bool) (unsigned short)57777)))) ? (((/* implicit */int) max(((short)-24898), (((/* implicit */short) (unsigned char)215))))) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) arr_11 [i_7] [i_5])) == (5227919614478597941ULL))))))));
                    arr_20 [i_5] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)-9651)) != (((/* implicit */int) (unsigned char)106))))))))));
                }
            } 
        } 
    } 
}
