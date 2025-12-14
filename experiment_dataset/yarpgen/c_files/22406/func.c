/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22406
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [14U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_8))) < (((/* implicit */unsigned long long int) 151751661U))))) != (((/* implicit */int) (_Bool)0))));
                var_18 = ((/* implicit */_Bool) 2845201509991300152LL);
                arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) - (arr_3 [i_1 + 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned int) var_6)), (var_0))));
                arr_6 [(signed char)4] [i_0] [i_1] = ((/* implicit */unsigned int) 11681395396646767778ULL);
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_1 [i_0]))))), ((short)-1))))) * (((((/* implicit */_Bool) ((var_8) << (((4294967295U) - (4294967273U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((8796092891136LL) >= (((/* implicit */long long int) 1933809123U)))))) : (2450233912U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1151660951802364730LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)8))))) ? (((((/* implicit */int) var_14)) & (((/* implicit */int) (unsigned short)36770)))) : (((/* implicit */int) (_Bool)1))))) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) 6378687602708913040LL))));
                var_19 = ((/* implicit */unsigned long long int) (unsigned short)36770);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (long long int i_5 = 3; i_5 < 13; i_5 += 3) 
        {
            {
                arr_20 [i_4] [i_4] = ((/* implicit */int) ((((151751661U) << (((((/* implicit */int) (unsigned short)36770)) - (36766))))) << (((((((/* implicit */_Bool) -7269534446871153458LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (8478144164752088174LL))) - (65527LL)))));
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) 1558235978)) ? (var_1) : (-710825434)));
                var_21 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)17216)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) 8273947716892484604LL)) ? (-1781436568168687174LL) : (6068523752932887797LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 8273947716892484611LL)) || (((/* implicit */_Bool) (signed char)114)))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_11 [i_4]), (arr_11 [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_19 [i_5] [i_4] [i_4])) : (((/* implicit */int) (short)32767))))) && (((/* implicit */_Bool) ((959876457U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))) : (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28765)) & (((/* implicit */int) (short)3584))))))))));
            }
        } 
    } 
}
