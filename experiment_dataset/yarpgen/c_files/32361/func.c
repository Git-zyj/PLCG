/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32361
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
    var_18 = ((/* implicit */short) (((+(max((11842042693152115313ULL), (((/* implicit */unsigned long long int) var_12)))))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) ^ (-2654989960601804573LL)))) & (((((/* implicit */_Bool) 18384035298123555527ULL)) ? (15ULL) : (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    var_20 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-15389)), (16555151409964820927ULL))))))), (14834092327311618229ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */_Bool) (+(min((arr_2 [i_0]), (arr_2 [(signed char)7])))));
        var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 4204137072273300997LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-42))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(-1912385397)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 4LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22467))))) : (((/* implicit */unsigned long long int) (+(2151178535U)))))))));
            var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32753))))) ? (((/* implicit */unsigned int) -1976076920)) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) (unsigned short)12760)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) : (2654989960601804572LL))), (((/* implicit */long long int) (unsigned char)249))))));
            var_26 -= ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2654989960601804587LL))))), (arr_11 [i_0] [i_2] [3])))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((37284633) < (-1912385398))))));
                        var_28 = ((/* implicit */short) (signed char)-78);
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5])) | (((/* implicit */int) (unsigned char)120)))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_11 [12LL] [i_6] [19ULL])), (((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) % (((/* implicit */int) arr_12 [i_5] [i_8] [i_7 + 3]))))) ? (max((arr_28 [i_5] [i_8]), (((/* implicit */unsigned long long int) (unsigned char)5)))) : (((/* implicit */unsigned long long int) -2061736096))))));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (-(max((min((((/* implicit */long long int) (unsigned char)5)), (2654989960601804572LL))), (-2654989960601804587LL))))))));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */long long int) min((2061736096), (892570780)));
}
