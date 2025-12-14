/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40570
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
    var_18 = ((/* implicit */unsigned int) max((max(((unsigned char)63), (((/* implicit */unsigned char) (signed char)115)))), (((/* implicit */unsigned char) var_4))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) 16678079015269582154ULL);
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) var_10))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) + (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 9744258359424773454ULL)) ? (16678079015269582153ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28672))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)28680), (((/* implicit */short) (signed char)117))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (unsigned short)47879))))) : (((((/* implicit */_Bool) 1853054477U)) ? (13U) : (((/* implicit */unsigned int) var_13))))))) ^ (((((/* implicit */long long int) ((int) (signed char)99))) & (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (134217727LL)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned long long int) max(((short)28680), ((short)28656)));
        var_20 = ((/* implicit */short) ((unsigned int) ((signed char) (signed char)127)));
    }
    for (unsigned char i_6 = 3; i_6 < 16; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */long long int) ((((unsigned long long int) ((689168305U) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((unsigned int) var_17))) : (((8533084886348302427LL) / (((/* implicit */long long int) var_5)))))))));
        arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 12845539983189869504ULL)) ? (((/* implicit */unsigned long long int) -1560473189)) : (6074822216254330371ULL)));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29241)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (short)-28645)) : (((/* implicit */int) (short)-26057))))) ? (((((/* implicit */_Bool) 12845539983189869518ULL)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (short)62)))) : (((/* implicit */int) (short)-12131))))));
    }
}
