/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42766
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
    var_13 = ((short) (+((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
    var_14 = ((/* implicit */unsigned short) var_0);
    var_15 = ((/* implicit */_Bool) min(((-(3761762757U))), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((min((arr_2 [i_0] [i_0]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!((_Bool)1))))));
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)4433))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) 3459229067U)), (8240394907050005852LL)));
                    arr_11 [7] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)224)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    for (short i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        var_17 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) - (2129057369U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63429))) - (17766414963339569451ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))))) | (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_12)))) | ((~(((/* implicit */int) arr_13 [i_3]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                {
                    arr_20 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((min(((((_Bool)1) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((_Bool)1), (arr_13 [i_3])))))) < (((/* implicit */int) (signed char)122))));
                    arr_21 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) min((((/* implicit */int) arr_19 [i_3])), (((arr_19 [i_3]) ? (((/* implicit */int) arr_19 [i_3])) : (((/* implicit */int) arr_19 [i_3]))))));
        arr_22 [i_3] [15U] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)117)) != (-233555525)));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) var_9);
                    arr_29 [i_6] [i_8] [i_8] [i_8] = ((/* implicit */long long int) arr_23 [i_6]);
                }
            } 
        } 
        arr_30 [i_6] = ((/* implicit */unsigned short) ((-881940828160240234LL) <= (arr_27 [i_6] [i_6] [i_6])));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned char) 14375855633475356111ULL);
        var_20 = ((/* implicit */unsigned char) (-(3330940785U)));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 714473015U)) ? (-1258732966241066689LL) : (((/* implicit */long long int) arr_33 [i_9])))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (unsigned short)55165)), (4163341754U)))));
}
