/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21915
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) (~((-(8760635754343855611LL)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [i_0]) << ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))) && (((/* implicit */_Bool) 14329359981897365200ULL))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) ((short) -6934072871468517744LL)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)9]))) - (var_7)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (-3594441420439655894LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15840)))))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14621594532794568249ULL)) ? ((+(14329359981897365201ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((7719846713921718903ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24421)))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_5 [i_2]) : (arr_5 [i_2])));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned short i_4 = 1; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_19 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1])) ? (-1674638307) : (((/* implicit */int) arr_16 [i_0] [i_4] [i_4 + 1] [i_4]))));
                        arr_20 [i_0] [1U] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_4])) && (((/* implicit */_Bool) arr_2 [i_2]))))) : (((/* implicit */int) arr_16 [i_0] [i_2] [i_3] [i_4]))));
                    }
                } 
            } 
            var_15 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) - (4117384091812186415ULL)));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned char i_7 = 1; i_7 < 24; i_7 += 4) 
                {
                    {
                        arr_28 [i_7 - 1] [i_7] [i_0] [i_0] [(signed char)18] = ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_0] [(short)5] [i_0]))));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((arr_25 [i_0] [i_5]) & (14329359981897365201ULL))) >> (((/* implicit */int) ((((/* implicit */int) arr_23 [i_6] [i_5] [i_6])) >= (((/* implicit */int) (short)17226))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 24; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        arr_33 [i_0] [6LL] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_8 - 2] [i_9] [i_0])) ? (arr_10 [i_8 + 1] [12LL] [i_0]) : (arr_10 [i_8 + 1] [i_5] [i_0])));
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 2889655632U)) && (((/* implicit */_Bool) 1836512311U)))))));
                        var_18 = ((/* implicit */long long int) (~(12596475220343138121ULL)));
                        var_19 -= ((/* implicit */short) (unsigned short)49588);
                    }
                } 
            } 
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) (short)10062)))))));
            var_21 = ((/* implicit */int) ((arr_30 [i_5]) + (((/* implicit */long long int) arr_0 [13U]))));
        }
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)80)) - (((/* implicit */int) (unsigned char)187))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        arr_39 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [22LL])) ? (((/* implicit */int) arr_1 [19ULL] [i_10])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_23 [12LL] [i_10] [i_10])) : (((/* implicit */int) arr_18 [i_10] [i_10] [(unsigned char)10] [i_10]))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(short)24] [i_10]))) + ((+(1822896709U)))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((503899993U), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20685))) : (764544022U)))))) || (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_18 [i_10] [(unsigned short)24] [i_10] [i_10]))))))));
        arr_40 [i_10] [i_10] = ((/* implicit */long long int) (-(var_12)));
    }
    var_24 = ((/* implicit */unsigned long long int) var_0);
    var_25 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (min((1255371768U), (((/* implicit */unsigned int) var_10))))))));
    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_10) ? (max((-8760635754343855586LL), (((/* implicit */long long int) 4142288861U)))) : (((/* implicit */long long int) ((unsigned int) var_3))))))));
}
