/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216664
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
    var_15 &= max((((/* implicit */unsigned short) var_9)), ((unsigned short)53670));
    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11872)) && (((/* implicit */_Bool) ((unsigned char) (unsigned short)17289))))))));
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)48225)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))))), (((((((/* implicit */int) (unsigned short)11851)) > (((/* implicit */int) (unsigned char)8)))) ? (2124624327U) : (((/* implicit */unsigned int) -1954399789))))));
    var_18 &= ((var_0) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17291))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) 6482335661994124317ULL)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))))));
                        arr_13 [i_0] = ((((/* implicit */int) (_Bool)1)) & (min((((/* implicit */int) (unsigned char)129)), ((-(((/* implicit */int) (unsigned short)17310)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) max(((unsigned short)36917), (var_14))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > ((-(((/* implicit */int) (unsigned short)32768)))))))));
            var_19 = ((/* implicit */_Bool) (unsigned short)7);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_20 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) max(((unsigned short)3897), (((/* implicit */unsigned short) (short)15))))) > (((/* implicit */int) ((unsigned char) 5662016781729041453ULL))))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (unsigned short)53653))));
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)48254)) ? (4882461938295097090ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) != (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)13)), ((short)5526)));
            var_24 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)13553))))));
            var_25 += ((/* implicit */unsigned short) ((unsigned long long int) max((10), (((/* implicit */int) (unsigned char)14)))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)52696))))) * (((((/* implicit */_Bool) (unsigned char)129)) ? (1705306532) : (((/* implicit */int) (_Bool)0))))));
            arr_30 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((_Bool) 11484235302205616028ULL));
            arr_31 [i_0] [i_0] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)2)) >= (((((/* implicit */_Bool) (unsigned char)129)) ? (1221723481) : (((/* implicit */int) (unsigned short)26037))))));
            arr_32 [(_Bool)1] [i_8] [11ULL] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)8188));
        }
    }
}
