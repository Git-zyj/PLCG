/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224393
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
    var_10 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (short)-3657)), (min(((~(var_4))), (max((((/* implicit */int) arr_1 [i_0])), (var_4)))))));
        arr_4 [1] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_11 = 1330383031;
        arr_7 [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1]))) ? (((/* implicit */int) min(((short)3653), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */int) (short)0)) & (((/* implicit */int) arr_1 [i_1]))))));
        arr_8 [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3657)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))))) ? (min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (unsigned short)27845)) ? (-3972059933136236061LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27865))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) var_2);
                    var_13 = ((/* implicit */int) arr_12 [i_4]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) (~(3875150007500724965ULL)));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -944565938737252768LL)) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_12 [i_6])))))))) > (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))))));
                    var_16 = ((/* implicit */unsigned int) arr_10 [i_5 - 1] [i_5 - 3]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((arr_22 [i_2] [i_2]) != (((arr_19 [i_2]) ? (12885334889400158355ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6955)) % (((/* implicit */int) arr_20 [i_2] [9ULL] [i_2]))))))))))));
                    var_18 = ((/* implicit */int) arr_15 [i_2] [i_2] [i_2]);
                    var_19 = (+(((((/* implicit */_Bool) max(((unsigned short)65167), (((/* implicit */unsigned short) arr_13 [i_2] [(short)17] [9ULL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_2] [i_7] [i_8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2]))))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((max((12885334889400158355ULL), (var_6))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-28947))))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_21 [i_2] [i_7] [i_7] [i_7])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_8] [i_8] [i_8]))))) : (max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)368)), (arr_24 [i_2] [i_7])))), (-7532160986998274265LL)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1330383026)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-6334364784413505308LL)));
}
